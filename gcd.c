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
int nonrecurssive_gcd(int num1,int num2)
{
while(num2!=0)
{
int temp=num2;
num2=num1%num2;
num1=temp;
}
return num1;
}
int main()
{
int num1,num2,temp,choice;
printf("enter the two number\n");
scanf("%d%d",&num1,&num2);
while(1)
{
printf("1.recurrsive way\n");
printf("2.non recurrsive way\n");
printf("3.Exit\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("gcd of the number using recurssive is %d and %d =\n",num1,num2);
printf("%d\n",recurssive_gcd(num1,num2));
break;
case 2:
printf("gcd of the number using non recurssive is = %d\n",num1);
nonrecurssive_gcd(num1,num2);
break;
case 3:
printf("Exit");
return 0;
}
}
return 0;
}
