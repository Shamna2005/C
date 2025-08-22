#include <stdio.h>
int main()
{
int n,original,sum;
printf("enter the an number\n");
scanf("%d",&n);
original=n;
while(n!=0)
{
int digit=n%10;
sum+=digit*digit*digit;
n=n/10;
}
if(sum==original)
{
printf(" number is armstrong \n");
}
else
{
printf(" number is not armstrong \n");
}
return 0;
}


