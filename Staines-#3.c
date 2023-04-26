#include <stdio.h>
#include <dirent.h>

int main()
{
    char dirname[10];
    DIR *p;
    struct dirent *d;

    printf("Enter directory name:\n");
    scanf("%s", dirname);

    p = opendir(dirname);

    // Error handling: Check if directory opened successfully
    if (p == NULL)
    {
        printf("Error opening directory\n");
        return 1; // Return a non-zero value to indicate an error
    }

    // Reading directory loop
    while ((d = readdir(p)) != NULL)
    {
        printf("%s\n", d->d_name);
    }

    // Close directory
    closedir(p);

    return 0;
}
