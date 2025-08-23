#include <stdio.h>
int factorial(int n){
if(n==0||n==1){
return 1;
}
else
{
fact=n *factorial(n-1);
return fact;
}
}
void main()
{
int num,n,fact;
printf("enter the limit");
scanf("%d",&num);
fact=factorial(num);
printf("enter the factorial %d : %d",num,fact);
}
