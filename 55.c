//vfork

#include        <stdio.h>
#include        <stdlib.h>
#include        <sys/types.h>
#include        <sys/wait.h>
#include        <unistd.h>
#include        <string.h>
//#include        "h.h"

int     main()
{
  int i;
  int status;
  pid_t f;
 // t_forky forky;

  //forky.value = 0;
  i = 0;
  status = 1;
  f = vfork();
  if (f < 0)
    {
     printf("Error!!");
    }
  else if (f > 0)
    {
      printf("\n===== Begin Parent =====\n\n");
      printf("fork() = %d\n", f);
      printf("getpid() = %d\n", getpid());
      while (i < 10)
      {
          printf(" Parent - i = %d\n", i);
          //++forky.value;
          ++i;
      }
    }
  else
    {
      printf("\n===== Begin Child =====\n\n");
      printf("fork() = %d\n", f);
      printf("getpid() = %d\n", getpid());
      while (i < 10)
      {
          printf("  Child - i= %d\n", i);
          //++forky.value;
          ++i;
      }
      _exit(status);
    }
  printf("status = %d\n", status);
  printf("i = %d\n\n", i);
  printf("===== End =====\n\n");
  return 0;
}

