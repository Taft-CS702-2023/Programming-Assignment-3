#include<stdio.h>
#include <stdlib.h>
#include<dirent.h>

int main(){
	char dirname[10];
	DIR *p;
	struct dirent *d;
	printf("Enter directory name\n");
	scanf("%s", dirname);
	p = opendir(dirname); //returns NULL if unsuccessful

	//error handling conditinal
	if(p == NULL){
		perror("have the dir if ur gonna ask for it");
		exit(1);
	}

	//reading directory loop!
	//returns a pointer to a dirent structure describing 
	//the next directory entry in the directory stream

	while(d == readdir(p))
		//readdir will return 0 upon reaching end of dir stream
		printf("%s\n", d -> d_name);
	return 0;
}
