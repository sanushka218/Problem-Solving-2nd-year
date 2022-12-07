#include <stdio.h>
#include <math.h>
int maxheight(int n, int r)
{
    //int a[20], i, count = 1, sum;
    int h,b,a;
    h=(-1+sqrt(1+8*n))/2;
    b=h*2*r;
    a=(h*b)/2;
    return a;
    /* while (sum <= n)
    {
        a[i] = count;
        sum=
        count++;
        i++;
    } */
}
int main()
{
    int r, n, area;
    printf("enter the radius of the coins\n");
    scanf("%d", &r);
    printf("enter the number of coins\n");
    scanf("%d", &n);
    area = maxheight(n, r);
    printf("the maximum area=%d", area);
    return 0;
}
