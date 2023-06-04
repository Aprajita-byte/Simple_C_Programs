/**
 * C program to print the given number pattern
 */

#include <stdio.h>
#include<conio.h>
void main()
{
    int i, j, k,m,s=14;
    printf("\t      1\n");
    
    for(i=1; i<=8; i++)
    {
        s=s-1;
        for(k=1; k<=s; k++){
            printf(" ", k);
        }

        for(j=1; j<=i+1; j++){
            printf("%d", j);
        }
        for(m=j-2; m>=1; m--){
            printf("%d",m);
        }
     printf("\n");
    }
getch();
}