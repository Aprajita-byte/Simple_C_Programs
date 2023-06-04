/**
 * C program to find power of any number using for loop
 */

#include <stdio.h>
#include <conio.h>
void main()
{
  int base, exponent;
  long long power = 1;
  int i = 1;

  /* Input base and exponent from user */
  printf("Enter base: ");
  scanf("%d", &base);
  printf("Enter exponent: ");
  scanf("%d", &exponent);

  /* Multiply base, exponent times*/
  while (i <= exponent)
  {
    power = power * base;
    i++;
  }

  printf("%d ^ %d = %lld", base, exponent, power);
  getch();
}