#include <stdio.h>
void display(char name[])
{
printf("name is %s",name);
}
int main()
{
char name[20];
printf("enter tour name");
scanf("%s",name);
display(name);
return 0;
}
