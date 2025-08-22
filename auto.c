#include <stdio.h>
int globalVar=10;
void autostorage(){
auto int age=10;
printf("enter the auto value %d",age);
printf("\n");
}
void registerstorage()
{
register int age=20;
printf("enter the register value %d",age);
printf("\n");
}
void staticstorage()
{
static int age=50;
printf("enter the static value %d",age);
printf("\n");
}
void externalstorage()
{
printf("enter the static value %d",globalVar);
printf("\n");
}
int main()
{
 autostorage();
registerstorage();
staticstorage();
externalstorage();
}
