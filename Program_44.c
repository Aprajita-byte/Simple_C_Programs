/**
 * C program to find sum of natural numbers between 1 to n by using while loop.
 */

#include <stdio.h>
#include<conio.h>
void main()
{
    int i=1, s=0;
    /* Find sum of all numbers */
    while(i<=50)
    {
        s += i;
        i++;
    }

    printf("Sum of first %d natural numbers = %d", i, s);
getch();
}