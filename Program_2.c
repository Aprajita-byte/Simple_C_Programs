// C Program to Find Sum and Average of 3 Numbers

#include <stdio.h>
#include <conio.h>
void main()
{
  // declare variable
  float num1, num2, num3;
  float sum, avg;

  // take inputs
  printf("Enter three Numbers: ");
  scanf("%f %f %f", &num1, &num2, &num3);

  // calculate sum
  sum = num1 + num2 + num3;

  // calculate average
  avg = sum / 3;

  // display entered numbers
  printf("Entered numbers are: %.2f, %.2f and %.2f\n", num1, num2, num3);

  // display sum and average
  printf("Sum=%.2f\n", sum);
  printf("Average=%.2f\n", avg);
  getch();
}