/* Description : A program to print the multiplication table
of a given number. For example number = 5
your program output should be:
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
Authore : M. Sudhakar */
#include<stdio.h>
int main()
{
	int number,i;
	printf("Please enter a number");
	scanf("%d",&number);
	
	for(i=10;i>=1;i--)
	{
		printf(" %d * %d = %d \n",number,i,number*i);
	}
	
	
	
	
	
	return 0;
}
