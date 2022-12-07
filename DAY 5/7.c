#include <stdio.h>
void reversearray(int a[], int n)
{
    int i = 0, j = n - 1, temp;
    while (i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    printf("reversed array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
int main()
{
    int a[10], n, i;
    printf("enter the number of elements\n");
    scanf("%d", &n);
    printf("enter elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    reversearray(a,n);

    return 0;
}
