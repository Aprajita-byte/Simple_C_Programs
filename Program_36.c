/**
 * C program to print sum of all even numbers in s1 and sum of all even numbers in s2 between
 *  1 to n.
 */
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, s1 = 0, s2 = 0;

    /* Input upper limit from user */
    printf("Enter upper limit: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s1 = s1 + i;
        }
        else
            s2 = s2 + i;
    }

    printf("Sum of all even number between 1 to %d = %d\n", n, s1);
    printf("Sum of all odd number between 1 to %d = %d", n, s2);
    getch();
}