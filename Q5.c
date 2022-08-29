//Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{


int sum,num,k;
sum=1;
num=0;
printf("\n enter the number you want sum of the cubes numbers = ");
   scanf("%d",&k);
  for(sum=1;sum<=k;sum++)
  {
      printf("\n %d ",sum*sum*sum);
      num=num+sum*sum*sum;
  }
    printf("\n sum of the cubes numbers is = %d",num);
}

