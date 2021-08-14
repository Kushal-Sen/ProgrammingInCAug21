#include<stdio.h>

int add2Numbers(int,int); // function declaration 
int add2Numbers(int a, int b) // function definition : Question what is the difference and What is the need?
{
	 return a+b;
}
// Error :  Compilation/Runtime/Logical
int main()
{
	int a,b,c,sum;
	printf("enter first number ");
	scanf("%d",&a);
	printf("enter second number ");
	scanf("%d",&b);
	
	printf("enter third number ");
	scanf("%d",&c);
	
	sum = add2Numbers(a,b,c);
	printf("sum:%d",sum);
}