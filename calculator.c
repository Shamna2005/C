#include <stdio.h>
int add(int n1,int n2)
{
int sum;
sum=n1+n2;
return sum;
}
int substraction(int n1,int n2)
{
int sub;
sub=n1-n2;
return sub;
}
int divition(int n1,int n2)
{
int div;
div=n1/n2;
return div;
}
int multiplication(int n1,int n2)
{
int mul;
mul=n1*n2;
return mul;
}
int modulas(int n1,int n2)
{
int mod;
mod=n1%n2;
return mod;
}
int main()
{
while(1)
{
int num1,num2,choice,adds;
printf("enter first number");
scanf("%d",&num1);
printf("enter the second number");
scanf("%d",&num2);
printf("\nCALCULATOR\n");
printf("1.addition\n");
printf("2.substraction\n");
printf("3.divition\n");
printf("4.multiplication\n");
printf("5.modulation\n");
printf("6.exit\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
adds=add(num1,num2);
printf("sum of the number is =%d",adds);
break;
case 2:
int sub=substraction(num1,num2);
printf("substraction of the number is =%d",sub);
break;
case 3:
int div=divition(num1,num2);
printf("divition of the number is =%d",div);
break;
case 4:
int mul=multiplication(num1,num2);
printf("multiplication of the number is =%d",mul);
break;
case 5:
int mod=modulas(num1,num2);
printf("modulation of the number is =%d",mod);
break;
case 6:
printf("Exit");
return 0;
}
}
return 0;
}

