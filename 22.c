//execl

#include <stdio.h>
#include<unistd.h>

	int main()
	{
		execl("/bin/rm", "rm", "shivi.c", NULL); 
		printf("Can only get here on error\n");
		return 0;
	}

