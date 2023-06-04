#include<stdio.h>
#include<conio.h>

void main()
{
  int ch;
  printf("1.ODD AND EVEN\n");
  printf("2.FACTORIAL OF A NUMBER\n");
  printf("3.PRIME OR NOT\n");
  printf("4.POSITIVE AND NEGATIVE\n");
  printf("5.EXIT\n");
  printf("enter your choice\n");
  scanf("%d",&ch);

switch(ch){
    case 1:
    int num;
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);
     if (num%2 == 0) 
      printf("Number is Even");
     else 
      printf("Number is Odd");
      break;
    case 2:
    printf("Enter any number: ");
    scanf("%d", &num);
    int fact;
    for(int i=1; i<=num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d = %llu", num, fact);  
    break;
    case 3:
     printf("Enter any number: ");
     scanf("%d", &num);
     int isPrime;
     if(isPrime == 1 && num > 1)
        printf("%d is prime number", num);
     else
        printf("%d is composite number", num);
     break;
    case 4:
     printf("Enter any number: ");
     scanf("%d", &num);
      if(num > 0)
            printf("%d is positive.", num);
      else if(num < 0)
            printf("%d is negative.", num);
      else
            printf("%d is zero.", num);
    break;
}
getch();
}