# Programming-Assignment-3
Implement Unix Commands
#include<stdio.h>
#include<dirent.h>


main()
{
char dirname[10];
DIR*p;
struct dirent *d;
printf("Enter directory name\n");
scanf("%s",dirname);
p=opendir(dirname);


//error handling conditinal
if(p==NULL)
{
perror("trouble locating directory");
exit();


}
while(d=readdir(p))
{
 printf("%s\n",d->d_name);
}


//reading directory loop
}
