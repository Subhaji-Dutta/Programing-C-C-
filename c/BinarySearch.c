#include<stdio.h>

void binary_search(int [],int,int,int);

void main()
{
   int a[100],n,i,item;

   printf("Enter the number of elements :");
   scanf("%d",&n);
   printf("Enter the elements into the array in ascending order\n");
   for(i=0;i<n;i++)
       scanf("%d",&a[i]);
   printf("The elements into the array are\n");
   for(i=0;i<n;i++)
       printf("%d ",a[i]);
   printf("\nEnter elements you want to search :");
   scanf("%d",&item);
   binary_search(a,0,n-1,item);
}

void binary_search(int a[],int low,int up,int item)
{
   int mid;
   mid=(low+up)/2;

   if(low>up) printf("%d not present into the array\n",item);
   else if(item<a[mid]) binary_search(a,low,mid-1,item);
   else if(item>a[mid]) binary_search(a,mid+1,up,item);
   else printf("%d found at index position %d\n",item,mid);
}
