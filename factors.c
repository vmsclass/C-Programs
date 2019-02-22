// Author : M. Sudhakar
// Program demonstrates on a c program to display the factors
#include<stdio.h>
#include<conio.h>
void main()
{
	int number,i=1,count=0;
	printf("Enter a number");
	scanf("%d",&number);
	
	// logic
	for(i=1;i<=number;i++)
	{
		if(number%i!=0)
		{
			printf("%d\n",i);
			count++;
		}
	}
	
	printf("The total number of factors: %d",count);
	
	
}
