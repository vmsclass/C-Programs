/* Description : A C Program to check the given character is
alphabet or not.
alphabets : a-z or A-Z
Author : M. Sudhakar
*/
#include<stdio.h>
int main()
{
	char ch;
	// read the character
	printf("Please enter any character: ");
	scanf("%c",&ch);
	
	//printf("%d",ch);
	
	// logic
	
	if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
		 printf("%c is an alphabet",ch);
	}
	else
	{
		 printf("%c is not an alphabet",ch);
	}
	
	return 0;
}
