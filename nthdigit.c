#include <stdio.h>
int main()
{
    int n, count = 0, num = 2, i;
    printf("enter a number: ");
    scanf("%d", &n);
     printf("first  %d nth prime number is\n", n);
    while(count < n)  
    {
    int prime=1;
        for(i = 2; i*i < num; i++)
        {
            if(num % i == 0)
            {
                prime=0;
            }
        }
        if(prime&&num>1)
        {
        printf("%d\n",num);
            count++;
        }
        num++;
    }
    return 0;
}

