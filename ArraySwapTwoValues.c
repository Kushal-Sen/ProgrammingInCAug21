#include<stdio.h>
int swapArraypos(int arrayA[], int pos1,int pos2) // int A[5][4]
{
    int t;
    int *p;
    p = &arrayA[0];
    printf("\nAddress of first element in function %u",p);
    printf("\nValue in a0 %d",*p);
    //p = &arrayA[1];
    //printf("Address of second element in function %u",p);
    printf("\nValue in a1 %d",*(p+1));

    printf("\nPointer of in array %u",arrayA);

    printf("\nValue of 3rd element in array %d",*(arrayA+2)); // arrayA[2]


    printf("\nValue in p+1 %u",(p+1));

    printf("\nsizeof int in function %u",sizeof(p));
    t = arrayA[pos1];
    arrayA[pos1] = arrayA[pos2];
    arrayA[pos2] = t;
}
int main()
{
    int arraytest[5];
    int i;
    int *p;
    p = &arraytest[0];
    printf("\nAddress of first element in main %u",p);
    for(i = 0 ; i < 5 ; i ++)
    {
        arraytest[i] = i;
    }


    for(i = 0 ; i < 5 ; i ++)
    {
        printf("\t%d",arraytest[i]);
    }

    swapArraypos(arraytest, 0,1);
    printf("\n");

     for(i = 0 ; i < 5 ; i ++)
    {
        printf("\t%d",arraytest[i]);
    }

}

// Write a basic matric calculator
// it should be able to add 2 matrices, substract and transpose and multiply
// structure and see if they are passed as copies of their address or value