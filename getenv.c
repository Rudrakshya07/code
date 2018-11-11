#include<stdlib.h>
#include<stdio.h>
int main()
{
char  *buff;
buff=getenv("HOME");
printf("value is : %s\n",buff);
putenv("HOME=/home");
buff=getenv("HOME");
printf("value is : %s\n", buff);
return 0;
}

