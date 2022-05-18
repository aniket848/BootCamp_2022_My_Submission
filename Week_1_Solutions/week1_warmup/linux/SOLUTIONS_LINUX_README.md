

### Exercises

1. Find the variant of the <code>ls</code> command (i.e. argument(s) to be used) to list contents of a folder including its hidden files, the variant of <code>cp</code> to copy folder and the command to rename a file.
 
 Ans => 
 
   ![Screenshot (123)](https://user-images.githubusercontent.com/62254194/169117761-bfe24e02-5f71-4274-930a-f5c132df2cc1.png)

   ![Screenshot (124)](https://user-images.githubusercontent.com/62254194/169118195-657a682a-a84f-4072-9d18-fe4cd78c2304.png)


2. In this question, we will understand the hardware configuration of your working machine using the <code>/proc</code> filesystem.

    - Run command <code>more /proc/cpuinfo</code> and explain the following terms: <code>processor</code> and <code>cores</code>. Use the command <code>lscpu</code> to verify your definitions.
    - How many CPU sockets, cores, and processors does your machine have?
    - What is the frequency of each processor?
    - How much memory does your machine have?
    - How much of it is free and available? What is the difference between them?
    - What is the total number of user-level processes in the system?
    - What is the total number of number of forks since the boot in the system ?
    - How many context switches has the system performed since bootup?

Ans =>

   ![Screenshot (125)](https://user-images.githubusercontent.com/62254194/169118700-a4c0388f-32a1-4110-b620-3c752bbd8896.png)
   
![Screenshot (129)](https://user-images.githubusercontent.com/62254194/169118705-c4e1723d-2603-4b31-9ed3-cc1bf1afddc3.png)


3. In this question, we will understand how to monitor the status of a running process using the <code>top</code> command. Compile the program [cpu.c](cpu.c) given to you and execute it in the bash or any other shell of your choice as follows.
    ```console
    gcc --version
    # If gcc is not installed then run :- sudo apt-get install gcc
    gcc cpu.c -o cpu
    ./cpu
    ```
    
 =>![Screenshot (130)](https://user-images.githubusercontent.com/62254194/169118905-5cbdd46c-a337-4959-b338-822d3c7b00af.png)

  
    This program runs in an infinite loop without terminating. Now open another terminal, run the <code>top</code> command and answer the following questions about the cpu process.

    - What is the PID of the process running the cpu command?
    - How much CPU and memory does this process consume?
    - What is the current state of the process? For example, is it running or in a blocked state or a zombie state?

Ans => 

   ![Screenshot (131)](https://user-images.githubusercontent.com/62254194/169118914-a6277ac7-5699-4659-b929-c810a0a3af4d.png)
