#include<stdio.h>
int main()
{
    int age;
    int current_year;
    scanf("%d",&age);
    scanf("%d",&current_year);
    printf("Current year is %d and you age is %d so, your Date of birth year is %d",current_year,age,current_year-age);
    return 0;
}