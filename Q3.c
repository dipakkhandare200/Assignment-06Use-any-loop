//Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{


int sum,num,k;
sum=1;
num=0;
printf("\n enter the number you want sum of the odd  numbers = ");
   scanf("%d",&k);
  for(sum=1;sum<=k*2;sum+=2)
  {
      printf("\n %d ",sum);
      num=num+sum;
  }
    printf("\n sum of the odd numbers is = %d",num);
}

