#include <stdio.h>
int main()
{
    int a, b, c, big;
    printf("enter three number\n");
    scanf("%d %d %d", &a, &b, &c);
    big = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("the largest number is %d", big);
    return 0;
}
