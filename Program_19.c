/*A company insures its drivers in the following cases: - If the driver is married. - If the
driver is unmarried, male and above 30 years of age - If the driver is unmarried, female and above
25 years of age In all other cases the driver is not insured. If the marital status, sex and age
of the driver are entered through the keyboard, write a program to determine whether the driver
is to be insured or not.*/

#include <stdio.h >
#include <conio.h>
void main()
{
    char m_status, gender;
    int age;
    printf(" Are you married?(Y/N)  ");
    scanf("%c", &m_status);

    fflush(stdin);

    printf(" Enter the gender(M/F)  ");
    scanf("%c", &gender);
    printf(" Enter the age : ");
    scanf("%d", &age);
    if (m_status == 'Y')
        printf(" The driver can be insured.\n\n ");
    else if (m_status == 'N' && gender == 'M' && age > 30)
        printf("The driver can be insured.\n\n ");
    else if (m_status == 'N' && gender == 'F' && age > 25)
        printf(" The driver can be insured.\n\n ");
    else
        printf(" The driver can not be insured.\n\n ");
    getch();
}
