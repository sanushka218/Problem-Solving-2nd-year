#include<stdio.h>
int main()
{
    int temp;
    printf("enter the temperature\n");
    scanf("%d", &temp);
    if (temp<0)
    {
        printf("freezing weather\n");
    }
    else if (temp>=0 && temp<10)
    {
        printf("very cold weather\n");
    }
     else if(temp>10 && temp<20)
    {
        printf("cold weather\n");
    }
    else if(temp>20 && temp<30)
    {
        printf("normal\n");
    }
     else if(temp>30 && temp<40)
    {
        printf("hot\n");
    }
     else if(temp>40)
    {
        printf("very hot\n");
    }
    
    
    return 0;
}
