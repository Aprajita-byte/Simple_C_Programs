//C Program to print the pattern.

#include<stdio.h>
#include<conio.h>
void main()
{ 
int i,j,k,s;

for(i=71;i>=65;i--) 
{
for(j=65;j<=i;j++)
{
printf("%c",j); 

}
for(s=1;s<((72-j)*2);s++) 
printf(" ");

for(k=i;k>=65;k--) 
{
if(k==71)
continue;
printf("%c",k);
}
printf("\n");
}


getch();
} 