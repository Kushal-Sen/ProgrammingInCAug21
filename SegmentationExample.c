
// C program to demonstrate segmentation
// fault when value is passed to scanf
#include <stdio.h>

int main()
{
int n = 2;
scanf("%d",n);
return 0;
}
