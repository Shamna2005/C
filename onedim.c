#include <stdio.h>
int main()
{
int arr[20],i,n,x=3;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("search element of the array\n");
scanf("%d",&x);
printf("enter the element of an array\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("array is\n");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
int found=0;
for(i=0;i<n;i++)
{
if(arr[i]==x)
{
printf("\nelement found %d at index %d\n",x,i);
found=1;
}
}
if(found!=1)
{
printf("element not found");
}
return 0;
}

