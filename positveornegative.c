/* Description: A  Program to check whether the
given number is positive or negative 
Author : M. Sudhakar */
#include<stdio.h>
#include<conio.h>
int main()
{
	int number;
	printf("Enter a number");
	scanf("%d",&number);
	
	// logic
	
	if(number>0)
	{
	   printf("The given number is positive");	
	}
	else if(number<0)
	{
	  printf("The given number is negative");	
	}
	else
	{ 
	  printf("The given number is 0");
	}
	
	return 0;
}

