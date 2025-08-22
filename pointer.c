#include <stdio.h>
int main()
{
int x=10;
int *p=&x;
printf("value= %d\n",x);
printf("Adreess of the value= %p\n",&x);
printf("pointer stored the address= %p\n",p);
printf("value pointed to by p= %d\n",*p);
return 0;
}
