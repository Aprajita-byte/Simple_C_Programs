//The distance between two cities (in km.) is input through the keyboard. Write a program to
// convert and print this distance in meters, feet, inches and centimeters.

#include<stdio.h>
#include<conio.h>
void main()
{
    float km, m, cm, f, in;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    /* calculate the conversion */
    m = km * 1000;
    cm = km * 1000 * 100;
    f = km * 3280.84;
    in = km * 39370.08;
    printf("The distance in Feet: %f\n", f);
    printf("The distance in Inches: %f\n", in);
    printf("The distance in Meters: %f\n", m);
    printf("The distance in Centimeters: %f\n", cm);
    getch();
}