#include<stdio.h>

int add2Numbers(int,int); // function declaration 
int add2Numbers(int a, int b) // function definition : Question what is the difference and What is the need?
{
	 return a+b;
}
// Error :  Compilation/Runtime/Logical
int main()
{
	int a,sum=0,i;  //,c,sum;  
	
	for( i = 1 ; i <= 12 ; i++)  //  i++   ==  i=i+1
	{
		printf("enter %d number",i);
		scanf("%d",&a);
		sum = add2Numbers(sum,a);
	}
	

	//printf("enter second number ");
	//scanf("%d",&b);
	
	//printf("enter third number ");
	//scanf("%d",&c);
	
	//sum = add2Numbers(a,add2Numbers(b,c));
	//sum = add2Numbers(add2Numbers(a,b),c));  //Still the same
	printf("sum:%d",sum);
}

//Create a calculator to add 12 positive numbers and we can guarantee that the numbers and the result can fit in "INT" 