#include <stdio.h>
#include <limits.h>
int main()
{
    int a[10], i, n, max, temp;
    printf("enter the number of chocholate squares\n");
    scanf("%d", &n);
    printf("enter the tastiness of each piece\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &n);
    }
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            a[i] = INT_MIN;
        }
    }
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            temp=max;
        }
    }
    printf("%d is the tastiness level of ishaan sister\n",temp);
    return 0;
}
