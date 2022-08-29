//Write a program to reverse a given number
#include<stdio.h>
int main()
{
int a,reverse;
reverse=0;
printf("\n enter the number you want to reverse =");
scanf("%d",&a);
while(a!=0)
{
    reverse=reverse*10;
    reverse=reverse+a%10;
    a=a/10;

}printf("reverse number is =%d",reverse);


}
