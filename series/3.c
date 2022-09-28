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
    int n,x,i;
    float sum=1.0,j,temp;
   // printf("enter the number of terms\n");
    scanf("%d", &n);
   // printf("enter the constant number x \n");
    scanf("%d", &x);
    for ( i = 1; i <= n; i++)
    {
        j=factorail(i);
        temp = x*(i/j);
        sum= sum+temp;
    }
    printf("%f\n",sum );
    return 0;
}
