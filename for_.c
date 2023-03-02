#include<stdio.h>
int main()
{
    int num,pow,i;
    int store=1;
    printf("Enter your number: ");
    scanf("%d",&num);
    printf("Enter your power: ");
    scanf("%d",&pow);
    for(i=1;i<=pow;i++)
    {
        store=store*num;
    }       
    printf("%d",store);
    return 0;
}