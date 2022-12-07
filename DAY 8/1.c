#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float r1,r2;
    printf("enter the value of a, b & c of the equation\n");
    scanf("%d %d %d", &a, &b, &c);
    d= b*b-(4*a*c);
    r1= (-b+ sqrt(d))/2*a;
    r2= (-b-sqrt(d))/2*a;
    printf("the roots of the equation are %f and %f", r1, r2);
    return 0;
}
