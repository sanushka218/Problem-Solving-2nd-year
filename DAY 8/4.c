#include <stdio.h>
void balanced(int n)
{
    int count = 0, l=0, r=0, a[10], rem=0, i, t=0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    if (count % 2 == 0)
    {
        printf("not an odd digit number\n");
    }
    else
    {
        for (i = 1; i <= count; i++)
        {
            a[i] = n % 10;
            n = n / 10;
        }
        t = count / 2;
        for (i = 1; i < t; i++)
        {
            r= r + a[i];
        }
        for (i = t + 1; i <=count; i++)
        {
            l = l + a[i];
        }
        if (l == r)
        {
            printf("balanced number\n");
        }
        else
        {
            printf("not balanced\n");
        }
    }
}

int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    balanced(n);
    return 0;
}