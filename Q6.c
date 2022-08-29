//Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{


int sum,num,k;
sum=1;
num=1;
printf("\n enter the number you want check sum of the factorial  = ");
   scanf("%d",&k);
  for(sum=k;sum>=1;sum--)
  {
      num=num*sum;
  }
    printf("\n sum of the factorial of you entered  number  = %d",num);
}

