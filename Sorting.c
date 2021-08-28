#include<stdio.h>
#include<stdbool.h>
#define maxLength 100
int returnSmallAmongst2(int,int);
int returnSmallAmongst2(int a,int b)
{
	if(a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
bool isEven(int);
bool isEven(int a)
{
	if(a%2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	
int i,smallest,logicalLength = 0,input;
int arrayA[maxLength];  // declare array

do
{
	if(logicalLength < maxLength)
	{
		
	printf("Enter Number  -1 to stop");
	scanf("%d",&input);
	arrayA[logicalLength++] = input;
	}
	else
	{
		break;
	}
	
}
while(input > -1);
logicalLength--;

// we have an array with logicalLength and non negative integers

//scanf("")

//for (i = index ;i < logicalLength)

}

// all non negative integers.
// insert a new element in an existing array at index 'j'   if there is space and j is less than or equal to the logicalsize  0 1 5 2 2   5 at pos 2
// delete an  element in an existing array from index j
// search for an element in an array