#include <stdio.h>
int main()
{
int n,count=0,num=2,i;
printf("enter an number");
scanf("%d",&n);
while(count<n)
{
for(i=2;i<num/2;i++)
{
if(num%i==0)
break;
}
if(i==num)
{
count++;
}
num++;
}
printf("%dth prime number is %d\n", n, num);
    return 0;
}

