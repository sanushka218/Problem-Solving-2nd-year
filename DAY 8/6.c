#include<stdio.h>
int main()
{
    int r,area;
    printf("enter the radius of the circle\n");
    scanf("%d", &r);
    area=2*r*r;
    printf("area of largest rectangle possible is %d\n",area);
    return 0;
}
