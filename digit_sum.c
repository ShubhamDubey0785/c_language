#include<stdio.h>
int main()
{
    int num,sum,sum1,sum2;
    printf("Enter your three digit number here: ");
    scanf("%d",&num);
    sum=num/100;
    sum1=(num/10)%10;
    sum2=num%10;
    printf("The digits at hundred place is %d\n",sum);
    printf("The digits at tens place is %d\n",sum1);
    printf("The digits at ones place is %d\n",sum2);
    printf("The sum of digits of number is %d",sum2+sum1+sum);
    return 0;
}