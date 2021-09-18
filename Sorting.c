#include<stdio.h>
#include<stdbool.h>
#define maxLength 100
int arrayA[maxLength];
int logicalLength;
int returnSmallAmongst2(int,int);
// we will sort the array in ascending order
//   	1 we will find the min pos.
//		2 swap minimum position with the first element in the "reduced length array"
//      repeat 1 and 2
//   7 6 5 1 9 - > 1 6 5 7 9 -> 1 5 6 7 9 -> 1 5 6 7 9 -> 1 5 6 7 9 now it is sorted

int findPosOfMinInArrayFromStartingIndex(int start)
{
	int i;
	int min = arrayA[start];
	int pos = start;
	for(i = start+1 ; i < logicalLength ; i++)
	{
		if(arrayA[i]< min)
		{
			min = arrayA[i];
			pos = i;
		}
	}
	return pos;
	
}

void sortArrayAscending()
{
	int i,j,t,smallestNumberPos;
	for(i=0;i<logicalLength-1;i++)
	{
		smallestNumberPos = findPosOfMinInArrayFromStartingIndex(i);	
		t = arrayA[i];
		arrayA[i] = arrayA[smallestNumberPos];
		arrayA[smallestNumberPos] = t;
	}
}


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

int searchFirstInstanceOfValue(int var) // var is the value of the element you want to search; so return is int because we want to return the index of the element; return -1
{
	int i;
	for(i=0;i<logicalLength;i++)
	{
		if(arrayA[i] == var)
		{
			return i;
		}
	}
	return -1;
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
int findPosOfMinInArray()
{
	int i;
	int min = arrayA[0];
	int pos = 0;
	for(i = 1 ; i < logicalLength ; i++)
	{
		if(arrayA[i]< min)
		{
			min = arrayA[i];
			pos = i;
		}
	}
	return pos;
	
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
	
	int i,smallest,input,pos; // local variable have local scope
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
	/*printArray();
	deleteValueinPosition(3);
	printArray();
	insertValueinPosition(7,2);
	printArray();
	pos = searchFirstInstanceOfValue(7);
	if( pos == -1)
	{
		printf("Value not found"); 
	}
	else
	{
		printf("Value at %d",pos);
	}
	printf("Pos of Min %d",findPosOfMinInArray());
	*/
	printf("Sorting Araay Now");
	sortArrayAscending();
	printArray();
}

 
// to find the position of the minimum value