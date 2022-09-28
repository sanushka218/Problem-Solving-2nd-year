#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the value of x co-ordinate\n");
    scanf("%d", &x);
     printf("enter the value of y co-ordinate\n");
    scanf("%d", &y);
    x>0 ? (y>0? printf("1st quadrant\n"): printf("4th quadrant\n")):
    (y>0 ? printf("2nd quadrant\n"): printf("3rd quadrant\n"));
    return 0;
}
