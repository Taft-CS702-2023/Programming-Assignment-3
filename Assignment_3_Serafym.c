#include<stdio.h>
#include<dirent.h>
#include<sysexits.h>
int main()
{
char dirname[10];
DIR*p;
struct dirent *d;
printf("Enter directory name\n");
scanf("%s",dirname);
p=opendir(dirname);

//error handling conditinal
if (p == NULL)
{
    printf("failed");
   return '0';
}
else {
//reading directory loop
while ((d = readdir(p)) != NULL) {
    printf("%s\n", d->d_name);
}
}
}