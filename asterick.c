#include<stdio.h>
int main()
{
    int user;
    int i=1;
    char symbol;
    printf("Enter your number here: ");
    scanf("%d",&user);
    while(user>0)
    {
        printf("*");
        user=user-1 ;
    }
    printf("\n");
    return 0;
}
// Second method...
// #include<stdio.h>
// int main()
// {
//     int user;
//     int i=0;
//     char symbol;
//     printf("Enter your number here: ");
//     scanf("%d",&user);
//     while(i<user)
//     {
//         printf("*");
//         i=i+1; ;
//     }
//     printf("\n");
//     return 0;
// }
// 