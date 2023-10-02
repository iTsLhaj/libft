
import os


for file in os.listdir('src'):
    if not file.startswith('ft_'):
        os.rename(f'src/{file}', f'src/{"ft_" + file}')