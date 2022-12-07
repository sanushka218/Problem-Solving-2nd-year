/* absolute Difference of 1: Given an array arr of size n.
 Print all the numbers less than k and should be such that
the difference between every adjacent digit should be 1 in the array.
Note: Return empty list if no such number present, driver code will
automatically print -1. Input: First line contains two space separated
numbers N and K, Number of elements in array and value of K and 2nd
line contains space separated N elements as the elements of the array A.
Output: Space separated numbers which satisfy the given condition. */
#include <stdio.h>
void absolutedifference(int a[], int n, int k)
{
    int i, temp, j = 0,b[10];
    for (i = 0; i < n; i++)
    {
        if (a[i] < k)
        {
            temp = a[i];
            if ((temp % 10) - ((temp / 10) % 10) == 1 || (temp % 10) - ((temp / 10) % 10) == -1)
            {
                b[j] = a[i];
                j++;
            }
        }
    }
    printf("the result is:\n");
    for (i = 0; i < j; i++)
    {
        printf("%d\t", b[i]);
    }
}
int main()
{
    int i, n, k, a[10];
    printf("enter the number of elements\n");
    scanf("%d", &n);
    printf("enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the number u want to compare from\n");
    scanf("%d", &k);
    absolutedifference(a, n, k);

    return 0;
}
