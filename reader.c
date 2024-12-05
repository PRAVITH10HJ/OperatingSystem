#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FIFO_NAME "myfifo"
#define BUFFER_SIZE  100
int main()
{
int fd;
char buffer[BUFFER_SIZE];
fd=open(FIFO_NAME,O_RDONLY);
if(fd==-1)
{
	perror("Error opening the fifo for reading");
	exit(0);
}
while(1)
{
	ssize_t bytes=read(fd,buffer,BUFFER_SIZE);
	if(bytes>0)
	{
		printf("Recived: %s",buffer);
	}
	else
	{
		break;
	}
}
close(fd);
}
