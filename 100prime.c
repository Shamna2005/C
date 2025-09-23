#include <stdio.h>
int main()
{
    int n=100, count = 0, num = 2, i;
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
        printf("%d\t",num);
            count++;
        }
        num++;
    }
    return 0;
}

