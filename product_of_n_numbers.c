/* Description : Program to print the product of first 'n' natural
numbers. for example if n = 5, the output is 120.
1 * 2 * 3 * 4 * 5 = 120
product = 1
product = 1 * 1 = 1
product = 1 * 2 = 2
product = 2 * 3 = 6
product = 6 * 4 = 24
product = 24 * 5 = 120
*/
#include<stdio.h>
int main()
{
	int i,product=1,number;
	
	printf("Please enter a number:");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		product = product * i;
	}
	printf("The total product is : %d", product);
	return 0;
}

// factorial n ! = n * (n-1) *(n-2) *....1
// 5 ! = 5 * 4 * 3 *2 *1 = 1*2*3*4*5











