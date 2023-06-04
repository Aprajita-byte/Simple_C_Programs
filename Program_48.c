/**
 * C program to print all number between 1 to 50 which is not divisible by 7.
 */
#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    while (i <= 50)
    {
        if (i % 7 != 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    getch();
}