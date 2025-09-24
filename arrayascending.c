#include <stdio.h>
int main()
{
int arr[10],i,n,j;
printf("enter the size of the array");
scanf("%d",&n);
printf("enter the elements of the array");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("The array");
for(int i=0;i<n;i++)
{
printf("%d \t",arr[i]);
}
for (i=0;i<n-1;i++) 
{
  for (j=0;j<n-i-1; j++) 
   {
    if (arr[j]>arr[j+1])
    {
      int temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;         
     }
   }
}
printf("sorted the array");
for(int i=0;i<n;i++)
{
printf("%d \t",arr[i]);
}
return 0;
}
