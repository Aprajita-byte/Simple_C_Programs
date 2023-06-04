// C program to check calculate profit or loss using conditional operator
#include <stdio.h>
#include <conio.h>
void main()
{
    int cost_price, selling_price;
    printf("Enter cost price: ");
    scanf("%d", &cost_price);
    printf("Enter selling price: ");
    scanf("%d", &selling_price);

    (selling_price > cost_price) ? printf("Profit = %d", selling_price - cost_price) : (cost_price > selling_price) ? printf("Loss = %d", cost_price - selling_price)
                                                                                                                    : printf("No Profit No Loss.");

    getch();
}