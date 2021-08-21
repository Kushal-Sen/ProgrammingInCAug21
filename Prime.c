#include<stdio.h>
#include<stdbool.h>

bool isPrime(int); // declaration
bool isPrime(int v)
{
	int i;
	for(i = 2 ; i < v ; i++ ) // i starts from 2 and num = 1       so the inside for loop will not execute    
		{
			if(v%i  == 0)
			{
				return false;
			}			
		}
	return true;
			
}
int main()
{
	int num,i,j,counter=0, counterPrimes = 0,choice,limit, primestore = 1;
	
	
	
	printf("Enter 1. to print prime upto n \n  Enter 2. to print check if a number is prime or not \n 3. to print nth prime");
	scanf("%d",&choice);
	
	if(choice == 1)
	{
		printf("Enter the limit");
		scanf("%d",&limit);
		for(num=1;counterPrimes< limit;num++)
		{
			counter = 0;
			num%2
			for(i = 3 ; i < num ; i = i+ 2 ) // i starts from 2 and num = 1       so the inside for loop will not execute    
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
	else if (choice == 2)
	{
		printf("Enter the number");
		scanf("%d",&limit);
		counter = 0;
		for(i = 2 ; i < limit ; i++ ) // i starts from 2 and num = 1       so the inside for loop will not execute    
			{
				if(limit%i  == 0)
				{
				counter = 1;
				}			
			}
		if(counter == 0)// even if loop does not run, it is okay.... Why ?    because the default value is '0'  ie: we start with the assumption that all numbers are prime...   So what went wrong ?
		{
			printf("Number is Prime  %d",limit);
		}
		else
		{
			printf("Number is Non Prime");
		}
		
	}
	else {
		printf("Enter the limit");
		scanf("%d",&limit);
		for(num=1;counterPrimes< limit;num++)
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
			primestore = num;
			//printf("Number is Prime  %d",num);
			counterPrimes++;
		}
		else
		{
			//printf("Number is Non Prime");
		}
		}
		printf("the nth prime is %d",primestore);
	}
	
	
}

//Extent this to print all prime numbers within   1 to 500

// write a menu driven program to print first n prime numbers or check if a number is prime or get the nth prime