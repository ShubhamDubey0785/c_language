#include<stdio.h>
int main()
{
    int a,n,d,formula;
    printf("Enter first term of A.P.: ");
    scanf("%d",&a);
    printf("Enter common difference of the A.P.: ");
    scanf("%d",&d);
    printf("Enter last term of A.P.: ");
    scanf("%d",&n);
    formula=a+(n-1)*d;
    printf("%d",formula);
    return 0;
}