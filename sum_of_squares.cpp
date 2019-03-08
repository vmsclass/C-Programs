/* Description: program to print the sum of squares of 'n' numbers
Author : M. Sudhakar */
#include<stdio.h>
int main()
{
	int sum=0,i,number;
	printf("Please enter a number: ");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		sum=sum+(i*i);
	}
	printf("The total sum is : %d",sum);
	
	return 0;
}
