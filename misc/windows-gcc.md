# Windows Setup (Compiler and IDE)
This tutorial will walk you through the setup process for getting the gcc/g++ compiler installed on windows with a unix toolchain and the CLion IDE provided by JetBrains. This document will walk you through 2 steps:
  1. Installing a Unix/Linux Tool for windows with a c++ compiler.
  2. Installing and running your first program on CLion.

## GCC/G++ Setup
A large majority of C Libraries and Packages are written for the Unix environment. Windows is not a Unix Environment. Cygwin and MinGW help get those packages and libraries to run in a Windows machine. CygWin/MinGW creates the Unix look and feel on the Windows environment. For the next step select either __CygWin__ or __MinGW__ to install. If you do not have a preference or do not know just go with CygWin as that is what I am most familiar with.

### CygWin Installation
1. First, download CygWin by visiting [cygwin.com/install.html](https://cygwin.com/install.html)
2. Choose the correct setup script depending on your operating system (either `setup-x86-64.exe` or `setup-x86-32.exe`). If you do not know which one to choose it is most likely that you will need the the 64 bit executable as most modern computers are run using 64 bit OS.
3. After you have downloaded the setup script, double click it to open up the installer window.

<div style="text-align: center;">
  <image src="./images/cygwin-start.gif" width="400px" />
</div>

4. Use the recommended settings and continue through by clicking `next` until you get to the __Installation Location__. 
5. Choose Installation Directory. It is usually recommended that you just use your `C:` drive. So your location will look something like this: `C:\cygwin`.
6. Choose Local Package Directory. This will be the location where CygWin installs other C/C++ libraries and tools for programming. You may leave it in the downloads folder if you like or change it to `C:\Storage\Cygwin`.
7. Follow the recommended settings until you get the the __Select Packages__ screen.
8. Select the following packages:
    - `gcc-core`
    - `gcc-g++`
    - `libgcc1`
    - `gdb`
    - `make`
    - `libmpfr4` (Note: this may already be selected on some systems. If already selected you can ignore this library)

// Insert image here

_Using the search bar, you can type in the name of each package, then select the latest version from the `Skip` dropdown._
9. Continue and wait for packages to download, then click `Finish`.

You should now be able to open up a new CygWin terminal window and run `g++ --version` from the command line

### MinGW Installation
1. Dowload the MinGW installer by visiting 

### More information on CygWin or MinGW
For more information on CygWin or MinGW you may visit [https://www.jetbrains.com/help/clion/quick-tutorial-on-configuring-clion-on-windows.html](https://www.jetbrains.com/help/clion/quick-tutorial-on-configuring-clion-on-windows.html). This is a quick tutorial on getting a windows environment configured for CLion. 

## CLion Setup
This will walk you through the installation and setup of the CLion IDE that we will be using for all programming assignments this semester. 

### Prerequisites
You have a student license for JetBrains Products allowing you to download CLion for free. If you do not have a license please visit [https://www.jetbrains.com/shop/eform/students](https://www.jetbrains.com/shop/eform/students) and provide your smu email for a free license.

### Installation
Once you have a Student License you may download CLion by visiting