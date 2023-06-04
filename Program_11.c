// Temperature of a City in Fahrenheit degree is input through the keyboard. Write a program to convert this temperature into centigrade degree.
#include<stdio.h>
#include<conio.h>
int main()
{
    float f, c;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (f-32)*5/9;

    printf("The Temperature in Centigrade Degree: %.2f", c);
    getch();
}