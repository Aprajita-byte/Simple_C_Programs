/**
 * C program to print the given number pattern
 */

#include <stdio.h>
#include<conio.h>
void main()
{
    int  i, j,a=0,b=0, N;

    printf("Enter N: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
     b=!b;
     a=!a;
        for(j=1; j<=i; j++)
        {
            a=!a;
            printf("%d",a);
        }

        printf("\n");
    }
getch();
}