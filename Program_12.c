// C program to swap two variables with or without third variable.
#include <stdio.h>
#include <conio.h>
void main()
{
  int x, y;
  printf("Enter Value of x ");
  scanf("%d", &x);
  printf("\nEnter Value of y ");
  scanf("%d", &y);
  printf("\nBefore Swapping: x = %d, y = %d", x, y);
  int temp = x;
  x = y;
  y = temp;
  printf("\nAfter Swapping(with third variable): x = %d, y = %d", x, y);
  /* x = x + y;
  y = x - y;
  x = x - y;
  printf("\nAfter Swapping(without third variable): x = %d, y = %d", x, y);*/
  getch();
}