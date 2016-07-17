#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int num1;
	printf("Enter a number\n");
	scanf("%d",&num1);
	printf("Factorial of the number is %d\n",fact(num1));
	getch();
}
int fact(int n)
{
	int x,y;
	if(n==0)
	{
		return(1);
	}
	else
	{
		x=n-1;
		y=fact(x);
		return(n*y);
	}
}
