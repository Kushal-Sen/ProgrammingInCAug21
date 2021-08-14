#include<stdio.h>
int main()
{
	int num,i,j,counter=0, counterPrimes = 0;
	
	
	
	// printf("Enter a number to check if it is prime");
	// scanf("%d",&num);
	
	for(num=1;counterPrimes< 5;j++)
	{
			for(i = 2 ; i < num ; i++ ) // i starts from 2 and num = 1       so the inside for loop will not execute    
			{
				if(num%i  == 0)
				{
				counter = 1;
				}			
			}
			if(counter == 0)
		{
			printf("Number is Prime  %d",num);
			counterPrimes++;
		}
		else
		{
			printf("Number is Non Prime");
		}
	}
}