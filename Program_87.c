/*C program to find the simple interest using function.*/

#include<stdio.h>
#include<conio.h>
float princial() 
{
    float a;   
     scanf("%f",&a);
    return a; 
}
float year() 
{
    float b;   
     scanf("%f",&b);
    return b; 
}
float rate() 
{
    float c;   
     scanf("%f",&c);
    return c; 
}
 int main()
{
    float a,b,c;
    float si;
    printf("\nEnter Prinicpal:");
    a=princial();
    printf("\nEnter year:");
    b=year();
    printf("\nEnter Rate:");
    c=rate(); 
     si = (a * b * c)/100;
    printf("\nSimple Interest = %.2f", si); 
    printf("\n");
    getch();
}