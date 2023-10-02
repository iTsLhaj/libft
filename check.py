import os
import subprocess
import argparse

from rich.console import Console
from rich.theme import Theme

LOG = 0
BREAK = 0

custom_theme = Theme({
        "compiled": "blue",
        "error": "red bold",
        "arrow": "green"
    })
console = Console(
    theme=custom_theme
)

if __name__ == "__main__":

    parser = argparse.ArgumentParser()
    parser.add_argument('-v', '--verbose', help="show compilation output.", action='store_true')
    parser.add_argument('-b', '--stop', help="break after the stderr output.", action='store_true')
    args = parser.parse_args()

    LOG = True if args.verbose else False
    BREAK = True if args.stop else False

    files = [file for file in os.listdir() if file.endswith('.c')]
    
    subprocess.call([
        "git",
        "add",
        "."
    ], stderr=subprocess.STDOUT, stdout=subprocess.DEVNULL)

    commit_msg = input("Commit Message: ")

    subprocess.call([
        "git",
        "commit",
        "-m",
        commit_msg
    ], stderr=subprocess.STDOUT, stdout=subprocess.DEVNULL)

    os.system("git push -u origin master")
    os.system("clear")
    print("\n")
    for file in files:

        out = subprocess.call(
            [
                "gcc", 
                "-std=c99", 
                "-W", 
                "-W", 
                "-W", 
                "-c",
                file
            ], stderr=subprocess.STDOUT, stdout=subprocess.DEVNULL)
        if out:
            console.print(f" [error]{file:<18}[/error] ✖")
            if LOG:
                print("\n")
                console.print(f"{'-'*32} OUTPUT {'-'*32}", style='magenta')
                try:
                    console.print(subprocess.check_output(
                        [
                            "gcc", 
                            "-std=c99", 
                            "-W", 
                            "-W", 
                            "-W", 
                            "-c",
                            file
                        ]
                        ), stderr=subprocess.STDOUT)
                except Exception: pass
                console.print(f"{'-'*72}", style='magenta')
                print("\n")
                if BREAK: break
        else:
            console.print(f" [compiled]{file:<18}[/compiled] ✔")

    os.system("rm *.o")
    console.print(" [arrow]➜[/arrow] Object Files Removed!", style="purple")
    print("\n")