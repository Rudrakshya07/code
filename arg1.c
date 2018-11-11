#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(int c, char *v[])
{
int i;
printf("total no of arguments passes=%d\n",c);
for(i=1;i<c;i++)
{
printf("arguments is %s\n",v[i]);
}
}
