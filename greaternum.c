#include <stdio.h>
int main()
{
int num1,num2,num3;
printf("first number\n");
scanf("%d",&num1);
printf("second number\n");
scanf("%d",&num2);
printf("Third number\n");
scanf("%d",&num3);
if(num1==num2&&num2==num3)
{
printf("all numbers are equal");
}
else if
int greater=(num1> num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
printf("greater number is %d\n",greater);
int smallest=(num1< num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
printf("smallest number is %d\n",smallest);
return 0;
}
