/**
 * C program to print multiplication table of a number
 */

#include <stdio.h>
#include<conio.h>
void main()
{
    int i, num;

    /* Input a number to print table */
    printf("Enter number to print table: ");
    scanf("%d", &num);

    for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n", num, i, (num*i));
    }
getch();
}