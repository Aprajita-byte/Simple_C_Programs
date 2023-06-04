/*write a program to solve the following:
1 + 2 + 3 + 4 + 5 + 6 ....7 terms
-   -   -   -   -   -
1!  2!  3!  4!  5!  6!     */

#include <stdio.h>
#include <conio.h>
void main()
{
  int num = 1, count;
  float sum = 0.0, fact;

  while (num <= 7)
  {
    fact = 1;
    for (count = 1; count <= num; count++)
    {
      fact = fact * count;
    }

    sum = sum + (num / fact);

    num++;
  }

  printf("Sum of series is %f\n", sum);
  getch();
}