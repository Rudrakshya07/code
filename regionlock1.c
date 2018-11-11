#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>

int main(){
int file_desc,res;
struct flock re1;
file_desc=open("f1.txt",O_RDWR);
re1.l_type=F_WRLCK;
re1.l_whence=SEEK_SET;
re1.l_start=5;
re1.l_len=5;
res=fcntl(file_desc,F_SETLK,&re1);
if(res==-1)
{
printf("region is not locked");
}
else{
printf("region is locked succesfully");
}
}
