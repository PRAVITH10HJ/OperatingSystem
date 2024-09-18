#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
{
char* cmd="ls";
char* argument[]={"ls","-1",NULL};
pid_t p=fork();
if(p<0)
{
printf("failed fork \n");
}
else if(p==0)
{
printf("Child Process \n");
int status=execvp(cmd,argument);
if(status==-1)
{
printf("Tetminated \n");
exit(1);
}
}
else
{
printf("Parent process \n");
printf("Done \n");
}
}
