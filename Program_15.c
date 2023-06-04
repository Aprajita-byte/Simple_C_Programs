//C program to enter 4 Digit Number and Display Sum of First and Last Number.

#include<stdio.h>
#include<conio.h>

void main()
{

  int n, r, sum = 0;

  printf("Enter 4 digit number: ");
  scanf("%d",&n);

  r= n/1000;

  sum = sum+r;

  r= n%10;

  sum=sum+r;

  printf("sum of first and last digit : %d", sum);

  getch();

}