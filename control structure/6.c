#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of sides of the traingle\n");
    scanf("%d %d %d", &a, &b, &c);
    a==b ? (a==c ? printf("the triangle is equilateral\n")
    : printf("the triangle is isosceles\n")):printf("the triangle is scalene");
    return 0;
}
