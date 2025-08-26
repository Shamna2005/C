#include <stdio.h>
int factorial(int n)
{
if(n==0||n==1)
{
return 1;
}
else
{
int fact=n* factorial(n-1);
return fact;
}
}
int main()
{
int i,fact,n;
printf("enter the limit");
scanf("%d",&n);
if(n<0)
{
printf("cannot find factorials");
}
else{
fact=factorial(n);
printf("factorial of\t%d is\t%d",n,fact);
}
return 0;
}
