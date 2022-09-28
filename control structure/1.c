#include<stdio.h>
int main()
{
    int b,t,h,d,a,p;
    char c;
    printf("enter your basic salary\n");
    scanf("%d",&b);
    printf("enter the grade from A,B,C\n");
    scanf("%c" ,&c);
    h= 0.2*(b);
    d= 0.5*(b);
    if (c=='A')
    {
        a=1700;
    }
     else if (c=='B')
    {
        a=1500;
    }
     else 
    {
        a=1300;
    } 
    p= 0.11*(b);
    t= b+h+d+a-p;
    printf("your total salary is %d",t);
    return 0;
}
