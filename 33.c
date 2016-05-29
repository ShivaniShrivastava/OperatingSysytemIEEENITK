//execvp

#include<stdio.h>
#include <unistd.h>

       void  main()

        {
char *args[3];
           args[0]="rm";
	   args[1]="shivi.c";
	args[2]=NULL;            
execvp(args[0], args);

        }

