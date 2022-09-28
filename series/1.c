#include<stdio.h>
int factorail(int i)
{
     if (i>=1)
    {
       i= i*factorail(i-1);
    }
    else 
    {
        return 1; 
    }
     
}
int main()
{
    int n,i,j,sum=0;
    printf("enter the number of terms you want to add\n");
    scanf("%d", &n);
    for ( i = 1; i <=n; i++)
    {
        j=factorail(i);
        sum= sum+j;
    }
    printf("the sum of series is %d\n", sum);
    return 0;
}
