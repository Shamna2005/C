#include <stdio.h>
int main()
{
int n1,n2;
printf("enter number1=\n");
scanf("%d",&n1);
printf("enter number2=\n");
scanf("%d",&n2);
printf("after swapping n1 is = %d and n2 is= %d\n",n1,n2);
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
printf("swapped n1 is = %d and n2 is = %d",n1,n2);
return 0;
}

