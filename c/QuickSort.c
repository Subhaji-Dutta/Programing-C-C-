#include<stdio.h>

void quick_sort(int [],int,int);
int partitioning(int [],int,int);
void swaping(int [],int,int);

void main()
{
    int a[100],n,i;
    printf("Enter the total number element :");
    scanf("%d",&n);
    printf("Enter elements into the array\n");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("Before sorting\n");
    for(i=0;i<n;i++)
       printf("%d ",a[i]);

    quick_sort(a,0,n-1);

    printf("\nAfter sorting\n");
    for(i=0;i<n;i++)
       printf("%d ",a[i]);
}

void quick_sort(int a[],int low,int up)
{
   int k;
   if(up<=low) return;
   k=partitioning(a,low,up);
   quick_sort(a,low,k-1);
   quick_sort(a,k+1,up);
}

int partitioning(int a[],int low,int up)
{
   int i,j,pivot;
   pivot=up;
   j=up;
   i=low-1;
   while(i<j)
   {
      while(a[++i]<=a[pivot] && i<j);
      while(a[--j]>=a[pivot] && j>i);
      if(i<j) swaping(a,i,j);
   }
   if(i<pivot)swaping(a,i,pivot);
   return i;
}

void swaping(int a[],int i,int j)
{
   int t;
   t=a[i];
   a[i]=a[j];
   a[j]=t;
}
