//Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
    int i,a;
    printf("Enter an integer\n");
    scanf("%d", &a);
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
        {
            printf("entered number is not prime");
            break;
        }

    }
    if(i==a)
        {
        printf("\n its prime number");

    }


    getch();
    return 0;
}
