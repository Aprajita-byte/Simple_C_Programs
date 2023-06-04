// C program to reverse digits of a number

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
  int num;
  long int a, reversenum = 0;

  printf("Enter the 5 digit number(Not Greater Than 32767):\n");
  scanf("%d", &num);

  a = num % 10;
  num = num / 10;
  reversenum = reversenum + a * 10000;

  a = num % 10;
  num = num / 10;
  reversenum = reversenum + a * 1000;

  a = num % 10;
  num = num / 10;
  reversenum = reversenum + a * 100;

  a = num % 10;
  num = num / 10;
  reversenum = reversenum + a * 10;

  a = num % 10;
  num = num / 10;
  reversenum = reversenum + a * 1;

  printf("The Number After Reverse is:%d\n", reversenum);
  getch();
}