#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
	char buf[200];
	int fd,fd1;
	if(argc<2)
	{
		printf("enter the two inputs for command line arguements\n");
		exit(1);
	}
	fd=open(argv[2],O_RDONLY);
	if(fd<2)
	{
		printf("failed to open\n");
		exit(1);
	}
	printf("%d\n",fd);
	while(fd1=read(fd,buf,199))
	{
		if(fd1<2)
		{
			printf("failed to read\n");
			exit(1);
		}
		buf[fd1]='\0';
		printf("%d\n",fd1);
		printf("%s\n",buf);
	}
}



