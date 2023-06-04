//Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary,
//and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.

#include<stdio.h>
#include<conio.h>
void main()
{
	int sal;
	float gros_sal;
	printf("Enter the basic salary of Ramesh : ");
	scanf("%d", &sal);
	
	//salary calculated
	gros_sal=sal+(sal*40/100)+(sal*20/100);
	
	printf("%g is the gross salary of Ramesh.", gros_sal);
	
	getch();
	
}