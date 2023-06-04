
/**
 * C program to print average of three numbers using functios.
 */

#include <stdio.h>
#include<conio.h>

/* Function declaration */
int avg();
void main()
{
    int a,b,c;
    float av;
    a= avg();
    b= avg();
    c= avg();    
    av =  (a+b+c)/3.0;
    printf("average = %f",av);
    getch();
}

 int avg()
{
    int num;
    printf("enter numbers\n");
    scanf("%d",&num);
    return num;
}