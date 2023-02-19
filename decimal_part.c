#include<stdio.h>
#include<math.h>

int main()
{
    float value;
    float ans;
    printf("Enter the floating point number: ");
    scanf("%f",&value);
    ans=value-floor(value);
    printf("The decimal part of number you entered is %.2f",ans);
    return 0;
}