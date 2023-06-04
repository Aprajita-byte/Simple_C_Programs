/**
 * C program to calculate factorial of a number
 */

#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 1, num;
    unsigned long long fact = 1LL;

    /* Input number from user */
    printf("Enter any number to calculate factorial: ");
    scanf("%d", &num);

    /* Run loop from 1 to num */
    while (i <= num)
    {
        fact = fact * i;
        i++;
    }

    printf("Factorial of %d = %llu", num, fact);
    getch();
}