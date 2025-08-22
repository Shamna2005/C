#include <stdio.h>
void calculate(int a,int b,int *sum,int *diff)
{
*sum=a+b;
*diff=a*b;
}
int main()
{
int n,m,sum,diff;
printf("number1");
scanf("%d",&n);
printf("number2");
scanf("%d",&m);
calculate(n,m,&sum,&diff);
printf("%d %d",sum,diff);
return 0;
}
