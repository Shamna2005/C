#include <stdio.h>
#include <string.h>
struct student{
char name[10];
int age;
char place[10];
};
int main()
{
struct student s;
strcpy(s.name,"shamna");
s.age=19;
strcpy(s.place,"tirur");
printf("name=%s \t",s.name);
printf("age=%d \t",s.age);
printf("place=%s \t",s.place);
return 0;
}
