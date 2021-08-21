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
		//call function a  - >  a would know what to do
		printf("Enter the limit");
		scanf("%d",&limit);
		for(num=1;counterPrimes< limit;num++) // While loop  : num = 1; while(counterPrimes < limit) { some statement; num++; }  // do while      do{}while(condition);
		{
			if(isPrime(num))
			{
				counterPrimes++;
				printf("%d th prime number is : %d \n",counterPrimes,num);
			}
		}
	}
	else if (choice == 2)
	{
		printf("Enter the number");
		scanf("%d",&limit);
		if(isPrime(limit))// even if loop does not run, it is okay.... Why ?    because the default value is '0'  ie: we start with the assumption that all numbers are prime...   So what went wrong ?
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
			if(isPrime(num))
			{
				counterPrimes++;
				primestore	= num;
			}
		}
		printf("the nth prime is %d",primestore);
	}
	
	
}

//Extent this to print all prime numbers within   1 to 500

// write a menu driven program to print first n prime numbers or check if a number is prime or get the nth prime