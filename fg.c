#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{int buff,value;
FILE *fp;
FILE *fd
;
fp=fopen("file1.txt","w");
printf("\n enter the details");
scanf("%d",&value);
putw(value,fp);
fclose(fp);
fp=fopen("file1.txt","a");
buff=getw(fp);
printf("\n the result is:%d",buff);

}
