# __Connecting to Genuse Servers (Windows)__
This is a tutorial on how to connect to the Lyle general purpose machines using your windows computer so that you can have a consistent environment to compile and run your programs. 

## __Prerequisites__
1. Make sure you have a Lyle account and password setup for the Genuse Lyle Servers. Your username will likely be the first part of your email. For instance if your email is jsmith@smu.edu your username would be `jsmith`.
2. Download and Install the latest version of [WinFsp](http://www.secfs.net/winfsp/download/). Choose the x64 or x86 installer according to your computer's architecture
3. Install the latest version of [SSHFS-Win](https://github.com/billziss-gh/sshfs-win/releases). Choose the x64 or x86 installer according to your computer's architecture under `assets`.
4. Download PuTTY for your ssh tool at [http://www.chiark.greenend.org.uk/~sgtatham/putty/download.html](http://www.chiark.greenend.org.uk/~sgtatham/putty/download.html). Choose the x32 or x64 version accoriding to your computer's architecture.

## __Connecting to Genuse (ssh and putty)__
In this tutorial we will be using PuTTY to connect to the Lyle Genuse Servers remotely. For more information on PuTTY and advanced usage feel free to check out the documentation [http://www.chiark.greenend.org.uk/~sgtatham/putty/docs.html](http://www.chiark.greenend.org.uk/~sgtatham/putty/docs.html). 

1. Open up the Putty executable application
2. In the `Host Name` field, enter `genuse30.lyle.smu.edu`. _You may also choose any other genuse machine by selecting one from this list: [https://www.smu.edu/OIT/Services/genuse](https://www.smu.edu/OIT/Services/genuse)_

<div style="text-align: center;">
  <image src="./images/putty1.gif" width="400px" />
</div>


3. Verify that under `Connection/SSH`, the `Preferred SSH protocol version` is set to `2`

<div style="text-align: center;">
  <image src="./images/putty2.gif" width="400px" />
</div>

4. The session may be saved by naming and clicking the `Save` button on the right hand side of the `Load, save or delete a stored Session`, and then later retrieved by clicking from the list box under the `Saved Sessions`.

<div style="text-align: center;">
  <image src="./images/putty3.gif" width="400px" />
</div>

5. Then click `Open` to connect to Genuse
6. If you see the "PuTTY Security Alert" dialog box, click `Yes`.
7. You will be prompted for the username and password. Use the username you were given for Lyle (i.e `jsmith`) and the temporary password you were given. 

If this is your first time logging in __be sure to change your temporary password by typing `passwd` then Enter__

9. Type `ls` to list all the files in your current directory. 
10. You are now connected to a Genuse Server. You may run any Unix command in the terminal shell to communicate with that server. For example, lets create a folder for your class material: 
    - Type `mkdir cs1342` then press enter
    - Now type `ls` and you should see the newly created directory called `cs1342`
    - Type `cd cs1342` to enter that directory. 
    - This folder will be where you can hold your Programs and Labs for this course. The next section walks you through how create a shared drive with this new directory so that you have access to these files on your machine.
    - For more on Unix Commands see the __Unix Commands__ section of this tutorial
11. When complete, type `exit` to exit the Genuse Server shell and return to your local terminal shell or close the PuTTY window.

### __Connecting to Genuse (sshfs)__
In this tutorial we will be mounting the Genuse drive to your computer and accessing the `cs1342` folder you created remotely. 

Once you have installed WinFsp and SSHFS-Win you can map a network drive to a directory on an SSHFS host using Windows Explorer.

In Windows Explorer select This PC > Map Network Drive and enter the desired drive letter and SSHFS path using the following UNC syntax where `REMUSER` is your username, `HOST` is the genuse server you are connecting to, and `[\PATH]` is an optional path you can pass to mount a specific directory instead of the entire home directory:

```
\\sshfs\REMUSER@HOST[\PATH]
```

For Example: connecting to `genuse26` enter the following: 

```
\\sshfs\jsmith@genuse26.lyle.smu.edu
```

This will map your entire home directory on Genuse to your drive. Alternatively if you want to mount a particular directory on genuse rather than the whole home directory you may specify a path like the following: 

```
\\sshfs\jsmith@genuse26.lyle.smu.edu\cs1342
```

This will mount just the `cs1342` directory.

The first time you map a particular SSHFS path you will be prompted for the SSHFS username and password. You may choose to save these credentials with the Windows Credential Manager in which case you will not be prompted again.

Enter in the username and password you set during the `ssh` tutorial.

<div style="text-align: center;">
  <image src="./images/winsfp.gif" width="400px" />
</div>

_Note: For more information on sshfs-win and how to mount a drive please visit [https://github.com/billziss-gh/sshfs-win](https://github.com/billziss-gh/sshfs-win)_

Once you have mounted the drive you will now have access to directories and files that exist remotely on your computer

### __Unmounting the Drive__
In order to unmap the drive, right-click on the drive icon in Windows Explorer and select `Disconnect`.

For more info on sshfs for windows see: [https://github.com/billziss-gh/sshfs-win](https://github.com/billziss-gh/sshfs-win)