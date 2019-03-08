/* Description : 
Program to print the sum of individual digits in a given number.
Author : M. Sudhakar */
#include<stdio.h>
int main()
{
	int sum=0,last_digit;
	long n;
	
	printf("Please enter a positive integer:");
	scanf("%ld",&n);
	
	while (n>0)
	{
		last_digit = n % 10;
		sum=sum+last_digit;
		n=n/10;
		
	}
	printf("The sum is : %d",sum);
	
	return 0;
}
