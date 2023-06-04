/* C Program to find Diameter, Circumference, and Area Of a Circle */

#include<stdio.h>
#include<math.h>
#include<conio.h>
void find_Area(float * , float * );

void main()
{
  float radius, area;
 
  printf("\n Please Enter the radius of a circle : ");
  scanf("%f",&radius);
  find_Area(&radius,&area); 
  printf(" Area Of a Circle = %.2f\n", area);
 
  getch();
}
float *a1;
float *r1;
void find_Area(float *r1,float *a1)
{
    *a1 = M_PI * (*r1) * (*r1);
}