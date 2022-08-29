//Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{


int sum,num,k;
sum=1;
num=0;
printf("\n enter the number you want sum of the natural numbers = ");
   scanf("%d",&k);
  for(sum=1;sum<=k;sum++)
  {
      num=num+sum;
  }
    printf("\n sum of the natural numbers is = %d",num);
}
