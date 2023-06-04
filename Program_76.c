/**
 * C program to print the given numbers pattern
 */

#include<stdio.h>
#include<conio.h>
void main()
{
  int n,a=1;

  printf("Enter number of rows: ");
  scanf("%d",&n);

  for(int i=1; i <= n; i++)
  {
    for(int j=1; j <= n-i; j++)
    printf(" "); // spaces
    
    for(int k=1; k <= i; k++){
    printf("%d ",a); //stars with space
    a++;
    }
    printf("\n"); // new line
  }
getch();
}