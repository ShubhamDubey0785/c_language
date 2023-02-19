#include<stdio.h>
int main()
{
    int date,month,year;
    printf("Enter your date here: ");
    scanf("%d",&date);
    printf("Enter your month here: ");
    scanf("%d",&month);
    printf("Enter your year here: ");
    scanf("%d",&year);
    printf("The hexadecimal number of date is: %X\n",date);
    printf("The hexadecimal number of month is: %X\n",month);
    printf("The hexadecimal number of year is: %X ",year);
    return 0;
}