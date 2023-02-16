#include<stdio.h>
int main()
{
    int num;
    int mun;
    scanf("%d",&num);
    scanf("%d",&mun);
    printf("Your birth year is %d and current year is %d so, your current age is %d",num,mun,mun-num);
    return 0;
}