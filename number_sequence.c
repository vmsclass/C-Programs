/* Description : A Program to print numbers in sequence
 1. print numbers from 1,2,3,4,.....10
 2. print numbers from 1,2,3,4,.....n
 3. print numbers from 1,3,5,7......n (odd numbers)
 4. print numbers from 2,4,6,8......n (even numbers)
 5. print numbers from 50 to 100 (even numbers)
Author : M. Sudhakar 
*/
#include<stdio.h>
int main()
{
	int i,n;
	
	printf("Enter the value for n :");
	scanf("%d",&n);
	/*
	for(i=50;i<=n;i=i+2)
	{
		printf("%d\n",i);
	}
	
	*/
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}
