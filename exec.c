#include<unistd.h>
#include<stdlib.h>
#include<stdio.>
#include<fcntl.h>
#include<errno.h>
int main()
{
int n;
n=open("f1.txt",O_RDWR|O_CREAT|O_EXCL,0777);
if(n==-1)
{
printf("Open failed with  error\n");
printf("%d Open file with error\n",getpid());
}
else
{
printf("Open successful\n");
printf("%d Open succesfully\n",getpid());
}
}

