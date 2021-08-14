#include<stdio.h>
int main()
{
	int num,i,j,counter=0, counterPrimes = 0;
	
	
	
	// printf("Enter a number to check if it is prime");
	// scanf("%d",&num);
	
	for(num=1;counterPrimes< 5;num++)
	{
			counter = 0;
			for(i = 2 ; i < num ; i++ ) // i starts from 2 and num = 1       so the inside for loop will not execute    
			{
				if(num%i  == 0)
				{
				counter = 1;
				}			
			}
		if(counter == 0)// even if loop does not run, it is okay.... Why ?    because the default value is '0'  ie: we start with the assumption that all numbers are prime...   So what went wrong ?
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