#include<stdio.h>
int main()
{
    int by=2000,n=0,d,m,y,i,td,a,ly=0;
    printf("the base year is 2000\n");
    printf("enter the date month and year\n");
    scanf("%d %d %d", &d, &m, &y);
    for (i = 1; i < m; i++)
    {
        if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
        {
            n=n+31;
        }
        else if (i==4 || i==6 || i==9 || i==11)
        {
            n=n+30;
        }
        
        else if (i==2 && y%4==0  && y%100!=0 || y%400==0)
        {
            n=n+29;
        }
        else
        {
            n=n+28;
        }
        
    }
    
while(y>=by)
{
    if(by%4==0  && by%100!=0|| by%400==0)
    {
        ly=ly+1;
        
    }
    by++;
}
  td= (y-2000)*365+d+n+ly;
     a= td%7;
        switch (a)
        { //printf("hello");
        case 1:
            printf("the date entered is saturday");
            break;
        case 2:
            printf("the date entered is sunday");
            break;
        case 3:
            printf("the date entered is monday");
            break;
            case 4:
            printf("the date entered is tuesday");
            break;
            case 5:
            printf("the date entered is wednesday");
            break;
            case 6:
            printf("the date entered is thursday");
            break;
            case 0:
            printf("the date entered is friday");
            break;
        }
    

    return 0;
}
