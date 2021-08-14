#include<stdio.h>
int main()
{
	int num,i,counter=0;
	printf("Enter a number to check if it is prime");
	scanf("%d",&num);
	for(i = 2 ; i < num ; i++ )
	{
		if(num%i  == 0)
		{
			counter = 1;
		}			
	}
	
	if(counter == 0)
	{
		printf("Number is Prime");
	}
	else
	{
		printf("Number is Non Prime");
	}
}