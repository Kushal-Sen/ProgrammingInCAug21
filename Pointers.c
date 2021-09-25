#include <stdio.h>

void swap(int *a , int *b) // 7 and 5
{
    
printf("\ta in swap= %u",a);
printf("\tb in swap= %u",b);
 
 
  *a = *a+*b;// a = 12 b = 5
  *b = *a-*b;// a = 12 b = 7
  *a = *a-*b;  // a = 5 b= 7

    //printf("\tpb in swap = %u",pb);
    //printf("\tp in swap = %u",p);
}

int main()
{
    int *p,*pb; // declared a pointer with name as "p"    pointers are variables that can store address
    int a = 7,b = 5;
    printf("\ta =%d, b = %d",a,b);

    //printf("\ta =%d, b = %d",a,b);
    pb = &b; 
    printf("\tpb before swap= %u",pb);
    p = &a; // p is a pointer and it is storing the address of 'a'
    //printf("\ta =%d",a);
    printf("\tp before swap= %u",p);
    swap(&a,&b);
    printf("\ta =%d, b = %d",a,b);
        pb = &b; 
    printf("\tpb = %u",pb);
    p = &a; // p is a pointer and it is storing the address of 'a'
    //printf("\ta =%d",a);
    printf("\tp = %u",p);

    //b = *p;   // b =a;    printf("p = %u",p);
    //printf("\tb = %d",b);

}