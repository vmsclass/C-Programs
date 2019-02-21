#include<stdio.h>
void main()
{
	int number,n1;
	
	printf("Please enter a number");
	scanf("%d",&number);
	n1=number%2;
	printf("%d\n\n",n1);
	
	if(number%2==0)
	{
		printf("The given number is even");
	}
	else
	{
		printf("The given number is odd");
	}
}
