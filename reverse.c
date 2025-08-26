/*#include <stdio.h>
int main()
{
int reversed=0,n,original;
printf("enter the number\n");
scanf("%d",&n);
original=n;
while(n!=0)
{
int digit=n%10;
reversed=reversed*10+digit;
n=n/10;
}
printf("the reverse of the number %d is %d\n",original,reversed);
return 0;
}*/
#include <stdio.h>
int reverse(int n)
{
int reversed=0;
while(n!=0)
{
int digit=n%10;
reversed=reversed*10+digit;
n=n/10;
}
return reversed;
}
int main()
{
int n,original;
printf("enter the number\n");
scanf("%d",&n);
original=n;
int rev=reverse(n);
printf("the reverse of the number %d is %d\n",original,rev);
return 0;
}
