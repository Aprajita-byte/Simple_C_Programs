//C program to find the average of three numbers using functions.

#include<stdio.h>
#include<conio.h>
 int avg(int,int,int);
void main()
{
    float a,b,c,average;
    printf("enter any three numbers\n");
    scanf("%f%f%f",&a,&b,&c);

    average = avg(a,b,c);
    printf("average = %f",average);
    getch();
}
int avg (int a,int b,int c){
    float average = (a+b+c)/3.0;
    return average;
}