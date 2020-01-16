## __Helpful Unix Commands for Terminal__
Here are a list of common helpful commands that you will most likely use while working in the genuse linux environment. 

### Managing Files
- `ls` - list files in directory<br>
  `ls -a` - list all files (including hidden) in a directory<br>
  `ls -l` - list files in long format
- `cat <filename>` - displays all content of a file
- `head <filename>` - displays the first 10 lines of a file
- `head -15 <filename>` - displays the first 15 lines of a file
- `tail <filename>` - displays the last 10 lines of a file
- `tail -15 <filename>` - displays the last 15 lines of a file
- `cp <filename1> <filename2>` - copies a file and pastes it at location filename2
- `mv <filename1> <filename2>` - moves a file to new location. can be used to rename a file.
- `rm <filename>` - delete a file permanently

### Managing Directories
- `cd <directoryname>` - change directories
  `cd` - change to home directory (regardless of where you are)
- `pwd` - show current location
- `mkdir <directoryname>` - create a new folder / directory
- `rm -rf <directoryname>` - delete all contents of directory
- `cp -rf <directoryname> <directoryname2>` - copy directory to new location
- `mv -rf <directoryname> <directoryname2>` - move directory to new location

### Compiling C++ Programs
- `g++ <filename>` - compiles filename (creates a `a.out` executable file)
- `g++ <filename> -o <executablename>` - compiles filename (creates a custom named executable file)
- `g++ <filename1> <filename2>` - compiles multiple .cpp files
- `g++ *.cpp` - compiles all .cpp files in current directory. A good shortcut for larger programs

### Executing C++ Programs
- `./<executable>` - executes and runs a executable file

There are many many more useful unix commands out there. A quick google search will give you plenty of results. All of these commands will also work on any MacOS, Linux or Unix Machine. Windows Command Line has different keywords but you can also find those with a quick Google search.
