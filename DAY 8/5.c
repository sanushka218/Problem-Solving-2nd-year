#include <stdio.h>
int prime(int n)
{
    int i, r;
    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            r = 1;
        }
        else if (i % 2 == 0)
        {
            r = 2;
        }
        else
        {
            r = i;
        }
        printf("least prime factor of %d is %d\n", i, r);
    }
}
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    prime(n);
    return 0;
}
