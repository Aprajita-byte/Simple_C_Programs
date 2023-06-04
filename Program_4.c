//Program to find area and perimeter of rectangle

#include <stdio.h>
#include<conio.h>
void main()
{
    float length, width, perimeter,area;

    /*
     * Input length and width of rectangle from user
     */
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("\nEnter width of the rectangle: ");
    scanf("%f", &width);

    /* Calculate area of rectangle */
    area = length * width;

    /* Calculate perimeter of rectangle */
    perimeter = 2 * (length + width);

    /* Print area of rectangle */
    printf("Area of rectangle = %f sq. units \n", area);

    /* Print perimeter of rectangle */
    printf("Perimeter of rectangle = %f units ", perimeter);
    getch();
    
}