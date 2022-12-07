#include <stdio.h>
#include <math.h>
void primefactor(int n)
{
    int c = 2;
    while (n > 1)
    {
        if (n % c == 0)
        {
            printf("%d ", c);
            n = n / c;
        }
        else
        {
            c++;
        }
    }
}
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    primefactor(n);
    return 0;
}
