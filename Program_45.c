/**
 * C program to print sum of all even numbers in s1 and sum of all even numbers in s2 between
 *  1 to 50 using while loop.
 */
#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 1, s1 = 0, s2 = 0;

    while (i <= 50)
    {
        if (i % 2 == 0)
        {
            s1 = s1 + i;
        }
        else
            s2 = s2 + i;
        i++;
    }

    printf("Sum of all even number between 1 to 50 = %d\n", s1);
    printf("Sum of all odd number between 1 to 50 = %d", s2);
    getch();
}