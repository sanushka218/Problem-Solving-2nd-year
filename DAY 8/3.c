#include <stdio.h>
#include <math.h>
int sum(int num)
{
    int sum = 0;
    while (num > 0 || sum > 9)
    {
      if (num==0)
      {
        num=sum;
        sum=0;
      }
      sum=sum+num%10;
      num=num/10;  
    }
    return sum;
}
int main()
{
    int num,result;
    printf("enter the number\n");
    scanf("%d", &num);
    result=sum(num);
    printf("the result is %d\n", result);

    return 0;
}
