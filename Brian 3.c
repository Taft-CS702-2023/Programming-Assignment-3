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
	if(p == NULL){
		perror("dir unavailable");
		exit(1);
	}
//reading directory loop
	while((d = readdir(p)) != NULL) //assign readdir(p) to d & check !NULL
		printf("%s\n", d -> d_name);// -> used to access the d_name member of the dirent structure
	
	return 0;
}