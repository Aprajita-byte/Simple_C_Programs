// While purchasing certain items, a discountof 10% is offered if the quantity purchased is
// morethan 1000. If quantity and price per item are inputthrough the keyboard, write a program to
//  calculate thetotal expenses.

#include <stdio.h>
#include <conio.h>
void main()
{
   int qty, dis = 0;
   float rate, tot;
   printf("Enter quantity and rate ");
   scanf("%d %f", &qty, &rate);
   if (qty > 1000)
      dis = 10;
   tot = (qty * rate) - (qty * rate * dis / 100);
   printf("Total expenses = Rs. %f", tot);
   getch();
}