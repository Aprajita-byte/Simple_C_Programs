/*IN A COMPANY AN EMPLOYEE IS PAID AS UNDER : IF HIS BASIC SALARY IS LESS THAN RS. 1500,
THEN HRA=10% OF BASIC SALARY AND DA=25% OF BASIC SALARY. IF HIS SALARY IS EITHER EQUAL TO OR
ABOVE RS.1500, THEN HRA=RS.500 AND DA=50% OF BASIC SALARY. IF THE EMPLOYEE’S SALARY ISENTERED
THROUGH THE KEYBOARD WAP TO FIND HIS GROSS SALARY.*/

#include <stdio.h>
#include <conio.h>
void main()
{
  int bs, ts, hra, da, a, b, salary;
  printf("enter the basic salary : ");
  scanf("%d", &bs);
  if (bs < 1500)
  {
    hra = bs * 0.10;
    da = bs * 0.25;
  }

  else if (bs >= 1500)
  {
    hra = 500;
    da = bs * 0.50;
  }

  ts = bs + hra + da;
  printf("gross salary of employee is :%d", ts);

  getch();
}