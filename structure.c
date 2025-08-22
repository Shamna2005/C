#include <stdio.h>
typedef struct{
int sum;
int diff;
}result;
result calculate(int a,int b)
{
result r;
r.sum=a+b;
r.diff=a-b;
return r;
}
int main()
{
int n,m;
printf("number1");
scanf("%d",&n);
printf("number2");
scanf("%d",&m);
result s=calculate(n,m);
printf("%d %d",s.sum,s.diff);
return 0;
}
