/**
 * C program to find factorial of any number using recursion
 */

#include <stdio.h>
#include<conio.h>
/* Function declaration */
unsigned long long fact(int num);


void main()
{
    int num;
    unsigned long long factorial;
    
    /* Input an integer from user */
    printf("Enter any number: ");
    scanf("%d", &num);
    
    factorial = fact(num); // Call factorial function
    
    printf("Factorial of %d is %llu", num, factorial);
    getch();
}


/**
 * Function to compute and return factorial of any number recursively. 
 */
unsigned long long fact(int num)
{
    // Base condition
    if(num == 0) 
        return 1;
    else
        return num * fact(num - 1);
}