#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
pid_t p=fork();
printf("my id is : %d\n",getpid());
printf("done\n");
return 0;
}
