/* Description: program to print the reverse number of a given number.
Author M. Sudhakar */
#include<stdio.h>
int main()
{
	int rev=0,last_digit;
	long n;
	
	printf("Please enter a number:");
	scanf("%ld",&n);
	
	while(n>0)
	{
		last_digit = n%10;
		rev=rev*10 +last_digit;
		n=n/10;
	}
	printf("The reverse of the given number : %d",rev);
	
	return 0;
}
