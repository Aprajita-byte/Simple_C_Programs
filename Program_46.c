/**
 * C program to print all number between 1 to 50 which is not divisible by 5 using while loop.
 */
#include <stdio.h>
#include <conio.h>
void main()
{
  int i = 1;
  while (i <= 50)
  {
    if (i % 5 != 0)
    {
      printf("%d\n", i);
    }
    i++;
  }
  getch();
}