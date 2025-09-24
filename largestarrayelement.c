#include <stdio.h>
int main()
{
int arr[10],i,n;
printf("enter the size of the array");
scanf("%d",&n);
printf("enter the elements of the array");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int largest=arr[0],smallest=arr[0];
for(int i=0;i<n;i++)
{
if(largest<arr[i])
{
largest=arr[i];
}
if(smallest>arr[i])
{
smallest=arr[i];
}
}
printf("largest = %d \n",largest);
printf("smallest = %d \n",smallest);
return 0;
}
