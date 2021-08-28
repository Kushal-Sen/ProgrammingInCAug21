#include<stdio.h>
#include "AggregationHelper.h"
#define x 7
int main()
{
	int max;
	int a = 5;
	max = maxOf2Int(a,x);
	
	printf("Max is %d",max);
}