// C program to calculate the sum of the series 1+(1+2) +(1+2+3) +(1+2+3+4) +...+(1+2+3+...+n)
#include <stdio.h>
#include <conio.h>
// function for creating the sum of the
// series up to Nth term
int series_sum(int n)
{
    if (n % 2 == 0)
        return (-(n / 2));
    else
        return ((n + 1) / 2);
}

// main code
void main()
{
    int n;
    printf("Series:1-2+3-4+5-6+7-8.....N\n");
    printf("Want some up to N terms?\nEnter the N term:");
    scanf("%d", &n);

    printf("Sum is:%d", series_sum(n));

    getch();
}