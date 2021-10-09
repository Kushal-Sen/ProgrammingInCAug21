#include <stdio.h>

int main() {
    int a =5;
   FILE *fp;

   fp = fopen("filehandling3.txt", "w");
   fprintf(fp, "This is testing for fprintf...\n%d",a);
   //fputs("This is testing for fputs...\n", fp);

   //printf("%d",a);
   printf("done");
   fclose(fp);
}