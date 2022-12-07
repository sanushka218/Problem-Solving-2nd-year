#include<stdio.h>
void swapadjacent(int a[], int n)
{
   int i,temp=0;
   for ( i = 0; i < n; i++)
   {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
   }
   printf("modified array is\n");
   for ( i = 0; i < n; i++)
   {
      printf("%d\t", a[i]);
   }
   
}
int main()
{
    int a[10],n,i;
    printf("enter the number of elements\n");
    scanf("%d", &n);
    printf("enter the elements\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    swapadjacent(a,n);
    
    return 0;
}
