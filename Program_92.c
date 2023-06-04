/*C program to find the simple interest using function.*/

#include<stdio.h>
#include<conio.h>
float Simple_int(float p, float r, float t) // function for finding simple interest
{
    float si;   
    si = (p * r * t)/100; // formula
    return si; // returning yhe value of si
}
 int main()
{
    float a,b,c;
    float intrest;
    printf("\nEnter Prinicpal:");
    scanf("%f",&a);
    printf("\nEnter year:");
    scanf("%f",&b);
    printf("\nEnter Rate:");
    scanf("%f",&c); 
    intrest = Simple_int(a,b,c);
    printf("\nSimple Interest = %.2f", intrest); 
    printf("\n");
    getch();
}