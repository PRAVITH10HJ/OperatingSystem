#include<stdio.h>
#include<unistd.h>
int main()
{
char* cmnd="ls";
char* argument[]={"ls","-1",NULL}; 
printf("Before exec() \n");
int status=execvp(cmnd,argument);
if(status==-1)
{
printf("Terminated incorrectly \n");
}
printf("This will not be printed");
}

