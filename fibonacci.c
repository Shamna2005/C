#include <stdio.h>
void fibonacci(int n){
for(int i=0;i<n;i++)
{
return fibonacci(n-1)+(n-2);
}
}
int main()
{
int n;
printf("enter the numbeer");
scanf("%d",&n);
fibonacci(n);
return 0;
}
