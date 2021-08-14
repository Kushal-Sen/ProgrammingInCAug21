#include<stdio.h>

int add2Numbers(int,int);
int add2Numbers(int a, int b)
{
	 return a+b;
}
int main()
{
	int a = 6;
	int sum = add2Numbers(a,4);
	printf("sum:%d",sum);
}