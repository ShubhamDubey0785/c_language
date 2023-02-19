#include<stdio.h>
int main()
{
    int user;
    printf("Enter user number here: ");
    scanf("%d",&user);
    if(user>=10000){
        printf("Five digit number entered by user.");
    }
    else if(user>=1000){
        printf("Four digit number entered by user.");
    }
    else if(user>=100){
        printf("Three digit number entered by user.");
    }
    else if(user>=10){
        printf("Two digit number entered by user.");
    }
    else{
        printf("Single digit number entered by user.");
    }
}