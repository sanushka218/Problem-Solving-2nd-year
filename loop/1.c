#include <stdio.h>
int main()
{
    int i, j, k, n = 1;
    for ( i = 1; i < 5; i++)
    {
        for ( j = 0; j < i; j++)
        {
           printf("%d",n);
           n++;
        }
        for ( k = 1; k < i; k++)
        {
            n--;
        }
        printf("\n");
    }
