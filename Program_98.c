
/* C PROGRAM FOR FACTORIAL USING POINTERS - FACTORIAL.C */

#include<stdio.h>
 #include<conio.h>
void findFactorial(int,int *); //function
void main(){
 int i,factorial,n;
 
 printf("Enter a number: ");
 scanf("%d",&n);
 
 findFactorial(n,&factorial);
 printf("Factorial of %d is: %d",n,factorial);
 
 getch();
}
 
void findFactorial(int n,int *factorial){
 int i;
 
 *factorial =1;
 
 for(i=1;i<=n;i++)
 *factorial=*factorial*i;
}