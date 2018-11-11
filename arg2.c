#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main(int c,char *v[])
{
int i;
for(i=1;i<c;i++)
{
open(v[i],O_CREAT,777);
}
}

