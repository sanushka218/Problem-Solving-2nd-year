#include <stdio.h>
void populatearray(int n)
{
    int a[50], i, j = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            a[j] = i;
            j++;
        }
    }
    for (i = n; i > 0; i--)
    {
        if (i % 2 == 0)
        {
            a[j] = i;
            j++;
        }
    }
    printf("the populated array is\n");
    for (i = 0; i < j; i++)
    {
        printf("%d\t", a[i]);
    }
}
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    populatearray(n);
    return 0;
}
