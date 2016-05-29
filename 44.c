#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{

	char array[4000];
        int h=open("/.shivi.c",  O_RDONLY);
	if(read(h,&array,3900)<0)
 	{
	printf("Error reading the file");
	//printf("%d",read(h,array,4000));
	}
	else 
	printf("%s",array);
	



}


 
    
 
