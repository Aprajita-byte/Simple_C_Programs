/**
 * C program to print alphabetical pattern
 */

#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for (i = 65; i <= N + 65; i++)
    {
        // Logic to print numbers
        for (j = 65; j <= i; j++)
        {
            printf("%c", j);
        }

        printf("\n");
    }

    getch();
}