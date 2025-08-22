#include <stdio.h>
int main()
{
int i,a[10],n,x,found=0;
printf("enter the size of the array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
printf("searching element\n");
scanf("%d",&x);
for(i=0;i<n;i++)
{
if(a[i]==x)
{ 
found=1;
break;
}
}
if(found)
        printf("Element found %d\n",i);
    else
        printf("Element not found.\n");

    return 0;
}

