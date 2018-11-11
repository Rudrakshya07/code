#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(int argc, char *argv[])
{
int opt;
while((opt= getopt(argc,argv,":if:r:")) !=-1)
{
switch(opt)
{
case 'i':
printf("hello");
break;
case 'r':
mkdir (optarg);
break;
case 'f':
open(optarg,O_CREAT,0777);
break;
case ':':
printf("need some value\n");
break;
case '?':
printf("unknown option: %c\n",optopt);
break;
}
}
for(;optind < argc; optind++)
printf("argument: %s\n", argv[optional]);
return 0;
}
