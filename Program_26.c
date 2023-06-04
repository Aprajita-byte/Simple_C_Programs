/**
 * C program to check even or odd number using conditional operator
 */

#include <stdio.h>
#include <conio.h>
void main()
{
    int num;

    /* Input a number from user */
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);

    /*
     * If n%2==0 then
     *     print it is even
     * else
     *     print it is odd
     */
    (num % 2 == 0)
        ? printf("The number is EVEN")
        : printf("The number is ODD");

    getch();
}