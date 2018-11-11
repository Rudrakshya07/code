#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>

int main(int c,char *v[])
{
int i,j;
j=open(v[1],O_RDONLY);
read(j,buff,5);

