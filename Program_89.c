/**
 * C program to find square of any number using function
 */
#include <stdio.h>
#include<conio.h>
/* Function declaration */
double sqr(double num);

int main()
{
    int num;
    double s;
    
    /* Input number to find square from user */
    printf("Enter any number: ");
    scanf("%d", &num);
    
    s = sqr(num);

    printf("Square of %d is %.2f", num, s); 
    
    getch();
}

/**
 * Function to find square of any number
 */
double sqr(double num)
{
    return (num * num);
}