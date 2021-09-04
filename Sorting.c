#include<stdio.h>
#include<stdbool.h>
#define maxLength 100
int arrayA[maxLength];
int logicalLength;
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

int deleteValueinPosition(int pos)
{
	int i,t;
		if (pos >= logicalLength)
		{
			printf("Element does not exist in position");
			return -1;
		}
		for (i = logicalLength-1 ; i>pos ;i--)
		{
			t = arrayA[pos];
			arrayA[pos] = arrayA[i];
			arrayA[i] = t;
		}
		logicalLength--;
	return 0;
}

int insertValueinPosition(int value,int pos)
{
	int i,t;
	if(logicalLength == maxLength)
	{
		printf("Sorry! Araay has no more space");
		return -1;
	}
	arrayA[logicalLength] = value;
	logicalLength++;   // inserted a value at the end and increased length
	
	for(i = logicalLength - 1;i > pos ; i--)
	{
		t = arrayA[i];//arrayA[i] = arrayA[i-1]; arrayA[i-1] = arrayA[i];
		arrayA[i] = arrayA[i-1];
		arrayA[i-1] = t;
	}	
	//arrayA[pos] = value;
	return 0;
}
void printArray()
{
	int i ;
	printf("\n");
	for(i=0;i<logicalLength;i++)
	{
		printf("%d\t",arrayA[i]);
	}
	printf("\n");
}
int main()
{
	
int i,smallest,input; // local variable have local scope
logicalLength = 0;

do
{
	if(logicalLength <= maxLength)
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
printArray();
deleteValueinPosition(3);
printArray();
if(insertValueinPosition(7,2) == 0)
{
	logicalLength++;
}
printArray();

// we have an array with logicalLength and non negative integers

//scanf("")

//for (i = index ;i < logicalLength)

}

// all non negative integers.
// insert a new element in an existing array at index 'j'   if there is space and j is less than or equal to the logicalsize  0 1 5 2 2   5 at pos 2
// delete an  element in an existing array from index j

// Complete this
// search for an element in an array
// find the mistake in the length of the array as it is printing 1 element extra ** 
