#include <stdio.h>
#include<conio.h>

void square (int *);

int main () {

    int number = 0;

    printf("To find the square of the number entered by the user ");
    scanf("%d",&number);
    square(&number);
   printf("square = %d",number);

     getch();
}

void square (int *x) 
{
    *x = *x ** x;
}