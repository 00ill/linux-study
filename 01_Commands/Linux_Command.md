Essential Linux Command
=======================

# ls
### ls command is used to list files and directories in the currnet working directory
-l : list permissions of the files and directories, size, modified date   
-lh : lise files sizes as kB, MB, GB   
-a : viewing hidden files   
-R : display the directory tree of files and folders   

# pwd
### print the current working directory on your terminal

# cd
### move around within directories

# mkdir
### create directories from within terminal

# cp and mv
### cp : copy and paste, mv : cut - paste, used rename file

# rm 
### delete files and folders
-r : remove specified file but also all of its subdirectories and files   

# touch
### create an empty file or updates the timestamp of an existing file   

# ln
### create link to another file, By default ln command make hard links
-s : create a symbolic link     

# clear
### clears terminal screen

# cat, echo, less
### cat command print contents of the file
### echo command print whatever follows after the command
### less command is need to install in arch, used like cat file_name | less use scroll cat scroll

# man
### man command is used to display manual page for a specific command

# uname, whoami
### uname command in Linux displays information about the system's kernel
### whoami command in Linux returns the current user's file_name

# tar, zip, unzip
### tar command in Linux is used to create and extract archived files
tar -cvf <archive name> <file1> <file2>.... is create archive file
tar -xvf <archive name> is extract files from archive

# grep
### grep command search tool in linux and unix based system
### it can search for specific patterns or strings
example   
grep "string" <FileName>
grep -r "string"

# head, tail
### display first or last 10 lines of a file
