#include<stdio.h>
void linear_search(int [],int,int);
void main()
{
   int a[100],n,i,item;

   printf("Enter the number of elements :");
   scanf("%d",&n);
   printf("Enter the elements into the array\n");
   for(i=0;i<n;i++)
       scanf("%d",&a[i]);
   printf("The elements into the array are\n");
   for(i=0;i<n;i++)
       printf("%d ",a[i]);
   printf("\nEnter elements you want to search :");
   scanf("%d",&item);
   linear_search(a,n,item);
}

void linear_search(int a[],int n,int item)
{
   int i;
   for(i=0;i<n;i++)
   {
       if(a[i]==item)
	   {
	      printf("%d found at index position %d\n",item,i);
		  break;
	   }
   }
   if(i==n) printf("%d not present into the array\n",item);
}
