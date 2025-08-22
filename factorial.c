#include <stdio.h>
int main()
{
int n,fact=1;
printf("enter the limet");
scanf("%d",&n);
if(n<0)
{
printf("cannot print");
}
else{
for(int i=1;i<=n;i++){
fact=fact*i;
}
printf("%d",fact);
}
return 0;
}

