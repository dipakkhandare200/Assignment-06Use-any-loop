//Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{


int sum,num,k;
sum=1;
num=0;
printf("\n enter the number you want sum of the even  numbers = ");
   scanf("%d",&k);
  for(sum=1;sum<=k;sum++)
  {
      printf("\n %d ",sum*2);
      num=num+sum;
  }
    printf("\n sum of the even numbers is = %d",num*2);
}
