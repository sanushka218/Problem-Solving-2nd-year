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
   int i,j,sum=0;
   for ( i = 1; i <=5 ; i++)
   {
    j=factorail(i);
    sum= sum+ (j/i);
   }
   printf("sum of series is %d\n", sum);
    return 0;
}
