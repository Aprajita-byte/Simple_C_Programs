//C program to sum of two numbers using functions.

#include<stdio.h>
#include<conio.h>
 int add(int,int);
void main()
{
    int a,b,c=0;
    printf("enter any two numbers\n");
    scanf("%d%d",&a,&b);

    c=add(a,b);
    printf("sum = %d",c);
    getch();
}
int add (int a,int b){
    return a+b;
}