#include <stdio.h>
void compute(int a,int b,int res[],int size)
{
res[0]=a+b;
res[1]=a-b;
}
int main()
{
int res[2];
compute(4,5,res,2);
printf("%d %d ",res[0],res[1]);
return 0;
}
