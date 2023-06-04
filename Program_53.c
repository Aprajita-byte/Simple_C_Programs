/*Write a program to print square of a number.*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, s;
    char ans = 'y';
    while (ans != 'n')
    {
        printf("enter any number:\n");
        scanf("%d", &n);
        s = n * n;
        printf("square of %d = %d\n", n, s);
        printf("Do you want to continue(y/n)\n");
        ans = getch();
    }
}