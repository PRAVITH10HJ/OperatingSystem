#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define FIFO_NAME "myfifo"
#define BUFFER_SIZE 100

int main()
{
int fd;
char buffer[BUFFER_SIZE];
// opening the fifo for writing
fd=open(FIFO_NAME,O_WRONLY);
if(fd==-1)
{
	perror("Error in opening the fifo for writing\n");
	exit(0);
}
//writing the message to fifo
for(int i=0;i<5;i++)
{
	snprintf(buffer,BUFFER_SIZE,"Message %d from the writer \n",i+1);
	write(fd,buffer,strlen(buffer)+1);
	sleep(1);
	// +1 is written because of the extra null element at the end of string
}
close(fd);
printf("Writing is done\n");
}
