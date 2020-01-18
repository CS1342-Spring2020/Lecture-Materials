# Windows Setup (Compiler and IDE)

This tutorial will walk you through the setup process for getting the gcc/g++ compiler installed on windows with a unix toolchain and the CLion IDE provided by JetBrains. This document will walk you through 2 steps:

1. Installing a Unix/Linux Tool for windows with a c++ compiler.
2. Installing and running your first program on CLion.

## GCC/G++ Setup

A large majority of C Libraries and Packages are written for the Unix environment. Windows is not a Unix Environment. Cygwin and MinGW are toolchains that help get those packages and libraries to run in a Windows machine. CygWin/MinGW creates the Unix look and feel on the Windows environment. You may choose either CygWin or MinGW for your linux environment. This tutorial will walk you through the setup with CygWin. (For MinGW Setup see the **More Info** section.)

### CygWin Installation

1. First, download CygWin by visiting [cygwin.com/install.html](https://cygwin.com/install.html)
2. Choose the correct setup script depending on your operating system (either `setup-x86-64.exe` or `setup-x86-32.exe`). If you do not know which one to choose it is most likely that you will need the the 64 bit executable as most modern computers are run using 64 bit OS.
3. After you have downloaded the setup script, double click it to open up the installer window.

<div style="text-align: center;">
  <image src="./images/cygwin-start.gif" width="400px" />
</div>

4. Use the recommended settings and continue through by clicking `next` until you get to the **Installation Location**.
5. Choose Installation Directory. It is usually recommended that you just use your `C:` drive. So your location will look something like this: `C:\cygwin`.
6. Choose Local Package Directory. This will be the location where CygWin installs other C/C++ libraries and tools for programming. You may leave it in the downloads folder if you like or change it to `C:\Storage\Cygwin`.
7. Follow the recommended settings until you get the the **Select Packages** screen.
8. Select the following packages:
   - `gcc-core`
   - `gcc-g++`
   - `libgcc1`
   - `gdb`
   - `make`
   - `libmpfr4` (Note: this may already be selected on some systems. If already selected you can ignore this library)

_Using the search bar, you can type in the name of each package, then select the latest version from the `Skip` dropdown (Do not select any `Test` versions)._

9. Continue and wait for packages to download (This may take some time, feel free to grab some coffee!), then select `Finish`.

You should now be able to open up a new CygWin terminal window and run `g++ --version` from the command line and see the current g++ version appear in the console. If you see it then you have successfully installed a C++ compiler! Next move onto **CLion Setup**

### More information on CygWin or MinGW

For more information on CygWin or MinGW you may visit [https://www.jetbrains.com/help/clion/quick-tutorial-on-configuring-clion-on-windows.html](https://www.jetbrains.com/help/clion/quick-tutorial-on-configuring-clion-on-windows.html). This is a quick tutorial on getting a windows environment configured for CLion.

## CLion Setup

This section will walk you through the installation and setup of the CLion IDE that we will be using for all programming assignments this semester.

### Prerequisites

You have a student license for JetBrains Products allowing you to download CLion for free. If you do not have a license please visit [https://www.jetbrains.com/shop/eform/students](https://www.jetbrains.com/shop/eform/students) and provide your smu email for a free license.

### Installation

1. Once you have a Student License you may download CLion by visiting the downloads page [https://www.jetbrains.com/clion/download/](https://www.jetbrains.com/clion/download/). Then click `Download`.

2. Double click the downloaded Clion setup file and walk through the setup. You may choose all the default settings.

3. Next you will have to activate your CLion account. To do so make sure `Get license from` has `JB Account` selected, then enter your username and password that you created for your student license.

<div style="text-align: center;">
  <image src="./images/clion-1.png" width="400px" />
</div>

4. Click `Next` after your license has been verified.

5. To setup CLion you will need to tell it what toolchain to use for compiling your programs. Select Cygwin from the Environment list. CLion will attempt to detect the Cygwin installation automatically. Check the detection result, and specify the path manually if needed.

<div style="text-align: center;">
  <image src="./images/clion-toolchain-cygwin.png" width="400px" />
</div>

6. Wait until the tools detection completes, then click `Start using CLion` to complete the CLion setup!. Thats it!

7. If you would like to test your installation, create a new CMake project (This will create a new C++ Hello World Program), then run the project (It should print out 'Hello World!'). To run a program in CLion you can select the green arrow in the top right corner of the IDE.

**NOTE: For all of your programs you will not need to create a new project. You will be opening up a starter project that will be given to you through GitHub. Instructions for how to do so can be found in the LabQuiz1 walkthrough**
