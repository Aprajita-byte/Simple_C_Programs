/**
 * C program to print ASCII values of all characters.
 */

#include <stdio.h>
#include <conio.h>
void main()
{
    int i;

    /* Print ASCII values from 0 to 255 */
    for (i = 0; i <= 255; i++)
    {
        printf("ASCII value of character %c = %d\n", i, i);
    }
    getch();
}