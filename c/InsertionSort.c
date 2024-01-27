#include<stdio.h>
#include<limits.h>

void insertion_sort(int [],int);

void main()
{
    int a[100],n,i;
    printf("Enter the total number element :");
    scanf("%d",&n);
    printf("Enter elements into the array\n");
    a[0]=INT_MIN;
    for(i=1;i<=n;i++)
       scanf("%d",&a[i]);
    printf("Before sorting\n");
    for(i=1;i<=n;i++)
       printf("%d ",a[i]);

    insertion_sort(a,n);

    printf("\nAfter sorting\n");
    for(i=1;i<=n;i++)
       printf("%d ",a[i]);
}

void insertion_sort(int a[],int n)
{
    int i,j,k;
    for(i=2;i<=n;i++)
    {
       k=a[i];
       for(j=i-1;a[j]>k;j--)
           a[j+1]=a[j];
       a[j+1]=k;
    }
}
