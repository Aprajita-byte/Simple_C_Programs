/**
 * C program to all natural numbers in reverse from n to 1
 */

#include <stdio.h>
#include <conio.h>
void main()
{
    int i, start;

    /* Input start range from user */
    printf("Enter starting value: ");
    scanf("%d", &start);

    /*
     * Run loop from 'start' to 1 and
     * decrement 1 in each iteration
     */
    for (i = start; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    getch();
}