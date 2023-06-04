/*
 * C program to print the sum of 1 to 15 numbers in which 5 is excluded..
 */
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, s = 0;
    for (i = 1; i <= 15; i++)
    {
        if (i % 5 != 0)
        {
            s = s + i;
        }
    }
    printf("sum of numbers = %d ", s);
    getch();
}