/*
 * C program to print the sum of 1 to 15 numbers in which 5 is excluded using while loop..
 */
#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 1, s = 0;
    while (i <= 15)
    {
        if (i % 5 != 0)
        {
            s = s + i;
        }
        i++;
    }
    printf("sum of numbers = %d ", s);
    getch();
}