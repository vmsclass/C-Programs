/* Description: C Program to check the given character is 
vowel or not. Vowels : a,e,i,o,u (A,E,I,O,U)
Author : M. Sudhakar
*/
#include<stdio.h>
int main()
{
	char ch;
	
	// read the character from the user
	printf("Please enter a character: ");
	scanf("%c",&ch);
	// logic
	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||
	  ch=='A'|| ch=='E'|| ch=='I'|| ch== 'O'|| ch=='U')
	  {
	  	printf("%c is vowel",ch);
	  }
	else
	{
		printf("%c is not a vowel",ch);
	}
	
	return 0;
}
