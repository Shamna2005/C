#include <stdio.h>
int main()
{
int i,n,prime=1;
printf("enter a number");
scanf("%d",&n);
if(n<=1)
prime=0;
else{
for(i=2;i*i<=n;i++)
{
if(n%i==0)
{
prime=0;
if(prime==1)
{
printf("The number %d is a prime number",n);
}
else
{
printf("The number %d is not a prime number",n);
}
return 0;
}
