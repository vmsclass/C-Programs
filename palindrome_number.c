/*Description : program to check the given number is palindrome or not.
Ex: n = 123, rev = 321 ; not a palindrome
Ex: n = 121, rev = 121 ; palindrome
Step 1: read a number (n = 121)
Step 2: reverse the number (rev = 121)
           # last_digit = n%10
           # rev= rev* 10 + last_digit
           # n = n/10
Step 3: if n == rev ; then palindrome; otherwise not a palindrome.
Author : M. Sudhakar */
#include<stdio.h>
int main()
{
	long n,temp;
	int rev=0,last_digit;
	
	printf("Please enter a number: ");
	scanf("%ld",&n);
	temp=n;
	
	while (n>0)
    {
	  last_digit = n%10;
	  rev=rev*10 + last_digit;
	  n=n/10;
	
	}
	printf("The reversed number is : %d\n",rev);
	
	if(temp==rev)
	   printf("%d is a palindrome",temp);
	else
	   printf("%d is not a palindrome",temp);
	
		
	return 0;
}

