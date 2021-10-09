#include <stdio.h>
#include <assert.h>

int main(int argc, const char * argv[])
{
    FILE *file = fopen("filehandling.txt", "r");
    FILE *fp;

    fp = fopen("filehandling4.txt", "w");
    char currentline[100];

    assert(file != NULL);

    while (fgets(currentline, sizeof(currentline), file) != NULL)
     {
        fprintf(stdout, "got line: %s\n", currentline);
        /* Do something with `currentline` */
    }

    fclose(file);
    fclose(fp);



}