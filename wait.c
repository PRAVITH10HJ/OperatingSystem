#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
printf("Begin\n");
pid_t p=fork();
if(p<0)
{
printf("fork faild\n");
}
else if(p==0)
{
printf("Child process\n");
}
else
{
printf("Parent process\n");
wait(NULL);
printf("child terminated\n");
}
printf("Done\n");
}



