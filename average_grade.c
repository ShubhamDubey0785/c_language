#include<stdio.h>
int main()
{
    int a,b,c;
    double average;
    printf("Enter you first number: ");
    scanf("%d",&a);
    printf("Enter you second number: ");
    scanf("%d",&b);
    printf("Enter you third number: ");
    scanf("%d",&c);
    average = (a+b+c)/3.0;
    printf("The average grade of your entered number is %.2lf ",average);
    return 0;
}