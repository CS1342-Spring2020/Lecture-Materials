# MacOS Setup (Compiler and IDE)

This tutorial will walk you through the setup process for getting the gcc/g++ compiler installed on MacOS using homebrew and the CLion IDE provided by JetBrains. This document will walk you through 2 steps:

1. Installing GCC/G++ using homebrew
2. Installing and running your first program on CLion.

## GCC/G++ Setup

To install GCC/G++ compilers for C++ we must first install a package manager that will help us manage downloads. We will be using homebrew to do so for this class.

### Homebrew Installation

1. Open up the `Terminal` application. (You can search for it in the spotlight).
2. Once a new terminal is open, paste the following line in the terminal and then press `Enter`

```
/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
```

3. To verify installation run `brew --version` to check the version of homebrew you have installed

### GCC/G++ Installation

Run the follwoing command in Terminal

```
brew install gcc
```

_Note: This can take some time to install and compile all the dependencies. This may take up to an hour on some machines_

Once this command completes you may move onto CLion Setup. If you run into errors take a screenshot and post in Slack!

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

5. Configure Toolchains - CLion will automatically configure your application to use the default XCode clang compiler. We want to configure it to use the gcc/g++ compiler we just installed using homebrew. To do so locate the `g++-9` executable (it should be located here `/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9`). Then paste the full path (`/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9`) into the `C++ Compiler` field. _Note: Your gcc version number may be different. Ensure you copy the correct version number_

<div style="text-align: center;">
  <image src="./images/clion-2.png" width="400px" />
</div>

6. Select `Start using CLion` to complete the CLion setup!

7. If you would like to test your installation, create a new CMake project (This will create a new C++ Hello World Program), then run the project (It should print out 'Hello World!'). To run a program in CLion you can select the green arrow in the top right corner of the IDE.

**NOTE: For all of your programs you will not need to create a new project. You will be opening up a starter project that will be given to you through GitHub. Instructions for how to do so can be found in the LabQuiz1 walkthrough**
