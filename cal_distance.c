#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    int coor1,coor2;
    printf("Enter x1 coordinate: ");
    scanf("%d",&x1);
    printf("Enter y1 coordinate: ");
    scanf("%d",&y1);
    printf("Enter x2 coordinate: ");
    scanf("%d",&x2);
    printf("Enter y2 coordinate: ");
    scanf("%d",&y2);
    coor1=(x1-x2)*(x1-x2);
    coor2=(y1-y2)*(y1-y2);
    printf("The distance between the coordinate entered by the user is %.2f",sqrt(coor1+coor2));
    return 0;

}