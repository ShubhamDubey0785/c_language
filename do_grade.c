#include<stdio.h>
int main()
{
    int num;
    do{
        printf("Enter a grade between 0 and 100: ");
        scanf("%d",&num);
    }while(num<=100 && num>=1);
    printf("Enter correct grade...");
    return 0;
}