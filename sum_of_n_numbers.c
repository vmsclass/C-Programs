/* Description: Program demonstrates sum of 'n' numbers. ex : n =10
1+2+3+4+5+6+7+8+9+10  = 55
sum = 0
sum = 0 + 1   = 1
sum = 1 + 2   = 3
sum = 3 + 3   = 6
sum = 6 + 4   = 10
sum = 10 + 5  = 15
sum = 15 + 6  = 21
sum = 21 + 7  = 28
sum = 28 + 8  = 36
sum = 36 + 9  = 45
sum = 45 + 10 = 55

Author : M . Sudhakar  */
#include<stdio.h>
int main()
{
  int i,sum=0,number;
  
  printf("Please enter a number: ");
  scanf("%d",&number);
  for (i=1;i<=number;i++)  
  {
  	printf("Iteratio %d \n",i);
  	printf("-----------\n");
  	printf(" old sum = %d\n ",sum);
  	printf(" i= %d\n", i);
  	sum = sum + i;
  	printf(" new sum = %d\n",sum);
  }
  printf("Sum is : %d", sum);
  
 
  
  	
  return 0;
}


