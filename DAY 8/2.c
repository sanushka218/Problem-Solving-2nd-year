#include<stdio.h>
#include<math.h>
int kth(int c, int k)
{
    int count=0,r;
    while (c>0 && count<k)
    {
        r= c%10;
        count++;
        if (count==k)
        {
            return r;
        }
       c=c/10; 
    }
    return 0;
}
int main()
{
    int a,b,c,k,result;
    printf("enter the base and exponent\n");
    scanf("%d %d", &a, &b);
    printf("enter the value of k\n");
    scanf("%d", &k);
    c= pow(a,b);
    result= kth(c,k);
    printf("the kth digit of %d raise to the power %d is %d\n", a,b,result);
    return 0;
}
