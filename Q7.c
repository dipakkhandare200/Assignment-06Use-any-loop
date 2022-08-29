//Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int a,b, count=0;
    printf("Enter an integer\n");
    scanf("%d", &a);
    b = a;

    while(a!=0)
        {
        a = a/10;
        ++count;
    }
    printf("Number of digits : %d", count);

    getch();
    return 0;
}
