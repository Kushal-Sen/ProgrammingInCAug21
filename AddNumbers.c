#include<stdio.h>

int add2Numbers(int,int); // function declaration 
int add2Numbers(int a, int b) // function definition : Question what is the difference and What is the need?
{
	 return a+b;
}
bool isEvenNumber(int); // function declaration for checking is even or not   : output   true if number is even, else false
bool isEvenNumber(int a)
{
	if(0 == a%2) // if a is divided by 2   check if the remainder is 0
	{
		return true;
	}
	else
	{
		return false;
	}
}
// Error :  Compilation/Runtime/Logical
int main()
{
	int a,sum=0,i,n;  //,c,sum;  
	
	printf("check if a number is even or not, enter the number ?");
	scanf("%d",&n);
	
	if(isEvenNumber(n))
	{
		printf("It is even");
	}
	else
	{
		printf("It is odd");
	}
	
	// for( i = 1 ; i <= n ; i++)  //  i++   ==  i=i+1
	// {
		// printf("enter %d number",i);
		// scanf("%d",&a);
		// sum = add2Numbers(sum,a);  // sum = sum + a    or   sum+=a;
	// }
	
	

	//printf("enter second number ");
	//scanf("%d",&b);
	
	//printf("enter third number ");
	//scanf("%d",&c);
	
	//sum = add2Numbers(a,add2Numbers(b,c));
	//sum = add2Numbers(add2Numbers(a,b),c));  //Still the same
	printf("sum:%d",sum);
}

//Create a calculator to add 'n' positive numbers and we can guarantee that the numbers and the result can fit in "INT" 