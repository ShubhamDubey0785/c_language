#include<stdio.h>
int main()
{
    int n,a,d,s;
    printf("Enter the first term of A.P.: ");
    scanf("%d",&a);
    printf("Enter the common difference of A.P.: ");
    scanf("%d",&d);
    printf("Enter the number of term of A.P.: ");
    scanf("%d",&n);
    s=((n/2)*(2*a+(n-1)*d));
    printf("%d",s);
    return 0;
}