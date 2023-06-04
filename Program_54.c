/*Write a program to print whether a number is odd or even.*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,s;
    char ans = 'y';
    while(ans!='n'){
        printf("enter any number:\n");
        scanf("%d",&n);
        if(n%2==0)
        printf("number is even\n");
        else
        printf("number is odd\n");
        printf("Do you want to continue(y/n)\n");
        ans = getch();
    }
}