#include <stdio.h>
int recurssive_gcd(int num1,int num2)
{
if(num2==0)
{
return num1;
}else{
return recurssive_gcd(num2,num1%num2);
}
}
int main()
{
int num1,num2;
printf("enter the two number\n");
scanf("%d%d",&num1,&num2);
printf("gcd of the number %d and %d is =\n",num1,num2);
printf("%d\n",recurssive_gcd(num1,num2));
return 0;
}
