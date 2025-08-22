#include <stdio.h>
void addfive(int arr[],int size)
{
for(int i=0;i<=size;i++)
{
arr[i]+=5;
}
}
int main()
{
int numbers[]={1,2,3,4,5};
int size=sizeof(numbers[0]);
addfive(numbers,size);
printf("modified string");
for(int i=0;i<=size;i++)
{
printf("%d",numbers[i]);
}
return 0;
}
