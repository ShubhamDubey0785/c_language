#include<stdio.h>
int main()
{
    int num,pow;
    int result=1;
    printf("Enter your number here: ");
    scanf("%d",&num);
    printf("Enter your power here: ");
    scanf("%d",&pow);
    while(pow>0){
        result=result*num;
        pow--;
    }
    printf("%d",result);
    return 0;
}