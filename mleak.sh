#!/bin/bash

# this is how to look for leaks in you're program ^^
# now this command will be executed, and all you have to do
# is locate a word that say's 
# "All heap blocks were freed -- no leaks are possible"
# other wise rah it means that you got some leaks right there
# NOTE: ghaliban f Lmain you gotta free the allocated memory !

EXECUTABLE=$1

# Reset
Color_Off="\033[0m"       # Text Reset

# Regular Colors
Green="\033[0;32m"        # Green
Yellow="\033[0;33m"       # Yellow
Blue="\033[0;34m"         # Blue
Purple="\033[0;35m"       # Purple

# Bold
BRed="\033[1;31m"         # Red
BPurple="\033[1;35m"      # Purple

# Underline
UBlue="\033[4;34m"        # Blue

if [[ $EXECUTABLE == ./* ]]
then
    EXECUTABLE=$1
else
    EXECUTABLE=./$1
fi

function checkLeak() {

    valgrind    --leak-check=full            \
                --show-leak-kinds=all        \
                --track-origins=yes         \
                --verbose                     \
                --log-file=valgrind-out.txt    \
                $EXECUTABLE

}

function header()
{
    clear
    printf "\n $Blue[$Yellow?$Blue]$Color_Off     If you have any questions or concerns, reach me out on discord:$BPurple lh4j$Color_Off\n"
    printf " $Blue[$Green *** $Blue]$Color_Off imma check memory leaks using valgrind on you're program$BRed -> $EXECUTABLE <-$Color_Off\n"
    printf "$Yellow NOTE : $Color_Off the output will be on $UBlue-> valgrind-out.txt <-$Color_Off\n\n"
}

header
checkLeak > /dev/null
echo ' done! ...'
