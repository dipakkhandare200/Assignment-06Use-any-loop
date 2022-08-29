//4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{


int sum,num,k;
sum=1;
num=0;
printf("\n enter the number you want sum of the squares numbers = ");
   scanf("%d",&k);
  for(sum=1;sum<=k;sum++)
  {
      printf("\n %d ",sum*sum);
      num=num+sum*sum;
  }
    printf("\n sum of the squares  numbers is = %d",num);
}


