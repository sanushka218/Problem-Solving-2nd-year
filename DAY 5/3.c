#include <stdio.h>
int mulofsubarray(int a[], int n)
{
    int i, l = 0, r = 0;
    for (i = 0; i < n / 2; i++)
    {
        l += a[i];
    }
    for (i = n / 2; i < n; i++)
    {
        r += a[i];
    }
    return (l * r);
}
int main()
{
    int a[10], n, i, r;
    printf("enter the number of elements\n");
    scanf("%d", &n);
    printf("enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    r = mulofsubarray(a, n);
        printf("the result is :%d\n", r);
    return 0;
}
