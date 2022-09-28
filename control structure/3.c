#include<stdio.h>
int main()
{
    char a;
    printf("enter the alphabet\n");
    scanf("%c", &a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        printf("the entered alphabet is vowel");
    }
    else{
        printf("the entered alphabet is a consonant");
    }
    return 0;
}
