// C program to evaluate sum of series  1-x+x^2/2! - x^3/3!+ ........  - x^9/9!.

#include <stdio.h>
#include <conio.h>
float power(float base, float x);
float recursion(float n);
void main()
{
    float x, ser = 0, ser1, i, sum = 0, z;

    // To take x from user
    printf("\nEnter x:");
    scanf("%f", &x);

    // To calculate positive part of series
    for (i = 2; i <= 8; i += 2)
        ser += power(x, i) / recursion(i);

    // To calculate negative part of series
    for (i = 1; i <= 9; i += 2)
        ser1 += power(x, i) / recursion(i);

    // Sum of series
    sum = 1 + ser - ser1;

    // To print series and it's sum
    printf("\n Sum of series : 1 - %.0f", x);
    for (i = 2; i <= 8; i += 2)
    {
        printf(" + %.0f^%.0f/%.0f!", x, i, i);
        z = i + 1;
        printf(" - %.0f^%.0f/%.0f!", x, z, z);
    }
    printf(" = %.4f", sum);
    getch();
}

// To calculate factorial of base value
float recursion(float n)
{
    if (n >= 1)
        return n * recursion(n - 1);
    else
        return 1;
}

// To calculate power
float power(float base, float a)
{
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
