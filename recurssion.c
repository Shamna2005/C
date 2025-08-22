#include <stdio.h>
int factorial(int n){
if(n==0){
return 1;
}
else
{
return n *factorial(n-1);
}
}
void main()
{
int num,n,f;
printf("enter the limit");
scanf("%d",&num);
f=factorial(num);
printf("enter the factorial %d : %d",num,f);
getchar();
}
