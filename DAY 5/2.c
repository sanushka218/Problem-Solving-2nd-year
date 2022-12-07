#include <stdio.h>
int numberofdays(int a[], int n)
{
    int i, max;
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int a[10], n, i, r;
    printf("enter the number of candles\n");
    scanf("%d", &n);
    printf("enter the size of candles\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    r = numberofdays(a, n);
    printf("number of days:%d\n", r);

    return 0;
}
