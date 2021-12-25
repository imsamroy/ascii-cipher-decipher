# ASCII Cipher Decipher
Cipher a message to ASCII and then decipher it

This project was developed by Sampreet Roy in C++.

If you do not have C++ setup on your system then follow the steps:

# C++ Setup for GNU/Linux distributions
The GCC compiler is normally installed by default in most distributions. You can check by-
```gcc -version``` or ```gcc -v```

Download the GCC compiler for:

Ubuntu- ```sudo apt install build-essential```

Arch (and Arch based distros like Manjaro)- ```sudo pacman -S gcc```

Red Hat- ```sudo yum groupinstall 'Development Tools'```

Fedora- ```sudo dnf groupinstall 'Development Tools'```

# C++ Setup for Mac
Download the GCC compiler for Mac- ```xcode-select --install```

# C++ Setup for Windows
Setup the MinGW compiler with instructions from- https://dev.to/gamegods3/how-to-install-gcc-in-windows-10-the-easier-way-422j or you can find any other way online :D

# Running the project on GNU/Linux distributions
Clone the repository to your computer- ```git clone https://github.com/imsamroy/ascii-cipher-decipher.git```

Then to cipher- ```cd "/home/sampreet/ascii-cipher-decipher/" && g++ ascii-cipher.cpp -o ascii-cipher && "/home/sampreet/Number-Guessing-Game/"ascii-cipher```

Then to decipher- ```cd "/home/sampreet/ascii-cipher-decipher/" && g++ ascii-decipher.cpp -o ascii-decipher && "/home/sampreet/Number-Guessing-Game/"ascii-decipher```

(replace "sampreet" with your user name, assuming that the repository is cloned in your home directory, if not then use the appropriate path for it)

# Running the game on Windows
Go to https://github.com/imsamroy/ascii-cipher-decipher and click on the green Code button and then click Download Zip. This will download a zip file. Then extract the zip file. Then open Windows Powershell and 

to cipher- ```cd "c:\Users\Home\Downloads\ascii-cipher-decipher-main\" ; if ($?) { g++ ascii-cipher.cpp -o ascii-cipher } ; if ($?) { .\ascii-cipher }``` 

to decipher- ```cd "c:\Users\Home\Downloads\ascii-cipher-decipher-main\" ; if ($?) { g++ ascii-decipher.cpp -o ascii-decipher } ; if ($?) { .\ascii-decipher }```

(Replace the "c:\Users\Home\Downloads\Number-Guessing-Game-main\" path in the command with the path of the extracted folder if it is different for you)
