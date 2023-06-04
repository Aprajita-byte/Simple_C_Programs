
/**
 * C program to sum of two digits by using functions.
 */

#include <stdio.h>
#include<conio.h>

/* Function declaration */
void sum();
void main()
{
    sum();
    getch();
}

void sum()
{
    int a,b,s=0;
    printf("enter any two numbers\n");
    scanf("%d%d",&a,&b);
    printf("sum = %d",a+b);
}