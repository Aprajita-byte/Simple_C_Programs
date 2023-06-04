/**
 * C program to print all even numbers from 1 to 50
 */

#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 1;
    printf("Even numbers from 1 to 50 are: \n");

    while (i <= 50)
    {
        /* Check even condition before printing */
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    getch();
}