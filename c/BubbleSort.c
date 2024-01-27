#include<stdio.h>

void bubble_sort(int [],int);

void main()
{
   int a[100],n,i,item;

   printf("Enter the number of elements :");
   scanf("%d",&n);
   printf("Enter the elements into the array\n");
   for(i=0;i<n;i++)
       scanf("%d",&a[i]);
   printf("Before Sorting\n");
   for(i=0;i<n;i++)
       printf("%d ",a[i]);

   bubble_sort(a,n);

   printf("\nAfter Sorting\n");
   for(i=0;i<n;i++)
       printf("%d ",a[i]);
}

void bubble_sort(int a[],int n)
{
   int i,j,t;

   for(i=1;i<n;i++)
   {
      for(j=0;j<n-i;j++)
      {
          if(a[j]>a[j+1])
          {
              t=a[j];
              a[j]=a[j+1];
              a[j+1]=t;
          }
      }
   }
}


