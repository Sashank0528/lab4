#include<stdio.h>
#include<conio.h>
#define MAX 100
int main()
{
	int num[MAX],n,num1,i,j,temp,first,last,middle;
	printf("Enter number of elements\n ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a number for array %d\n",i);
		scanf("%d",&num[i]);
	}
		printf("Given array is::\n");
	for(i=0;i<n;i++)
	{
		printf("%6d",num[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(num[j]>num[j+1])
			{
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}
	printf("\nYour array has been sorted in asceding order\n");
	printf("The sorted array is::\n");
	for(i=0;i<n;i++)
	{
		printf("%6d",num[i]);
	}
	printf("\nEnter the number you want to search\n");
	scanf("%d",&num1);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(num[middle]<num1)
		{
			first=middle+1;
		}
		else if(num[middle]==num1)
		{
			printf("%d found at location %d\n",num1,middle+1);
			break;
		}
		else
		{
			last=middle-1;
		}
		middle=(first+last)/2;
	}
	if(first>last)
	{
		printf("NOT FOUND!!! %d is not present in the array\n",num1);
	}
}











