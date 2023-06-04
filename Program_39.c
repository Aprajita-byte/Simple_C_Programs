/**
 * C program to print all number between 1 to 50 which is not divisible by 7.
 */
#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    for (i = 1; i <= 50; i++)
    {
        if (i % 7 != 0)
        {
            printf("%d\n", i);
        }
    }
    getch();
}