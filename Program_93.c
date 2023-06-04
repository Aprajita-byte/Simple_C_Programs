//C program to find the factorial using function.
#include<stdio.h>
#include<conio.h>
int findFact(int);

void main(){

    int x,fact,n;

    printf("Enter a number to get factorial: ");

    scanf("%d",&n);

    fact = findFact(n);

    printf("The factorial of %d is: %d",n,fact);
getch();

}
int findFact(int n){

    int x,fact=1;

    for(x=1;x<=n;x++)

      fact=fact*x;

     return fact;

}