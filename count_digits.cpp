/* Description : Program to print the total number of digits in
a given integer.  Ex: Input: 7845, Output : 4
Author : M. Sudhakar */
#include<stdio.h>
int main()
{
	long long n;
	int count=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	while (n!=0)
	{
		n=n/10;
		printf("n = %d\n",n);
		count=count+1;
		printf("count = %d\n",count);
	}
	printf("The total digits in the number : %d",count);
	
		return 0;
}

