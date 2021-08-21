#include<stdio.h>
#include<stdbool.h>
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
	

int a,b,c;
printf("Please enter the first number");
scanf("%d",&a);

printf("Please enter the second number");
scanf("%d",&b);

printf("Please enter the third number");
scanf("%d",&c);


	if(isEven(returnSmallAmongst2(a,returnSmallAmongst2(b,c))))
	{
		printf("the smaller number is even");
	}else
	{
		printf("the smaller number is not even");
	}
}