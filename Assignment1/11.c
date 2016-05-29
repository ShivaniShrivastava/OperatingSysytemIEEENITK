//1)getpid 2)getppid 3)fork

#include <stdio.h>
#include <unistd.h>
#include<sys/types.h>

int main()
{

    int counter = 0;
    pid_t pid = fork();

    if (pid == 0)
    {
        // child process
      printf("Hey I am the child process with process id - %d and parent's process id - %d",getpid(),getppid());
    }
    else if (pid > 0)
    {
        // parent process
       sleep(2);
printf("\n Hey I am the parent process with process id - %d",getpid());
 }
    else
    {
        // fork failed
        printf("fork() failed!\n");
        return 1;
    }


    return 0;
}
