#include <stdio.h>
#include <ctype.h>
void printString(char str[])
{
for(int i=0;i<str[i]!='\0';i++)
{
str[i]=toupper(str[i]);
}
}
int main()
{
char name[]="hello world";
printString(name);
printf("enter your name %s",name);
return 0;
}

