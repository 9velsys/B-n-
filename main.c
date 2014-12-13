#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, k = 0,b;
    do
    {
        printf("Please enter number:\n");
        scanf("%d",&a);
    }while(a>=1000000);
    while(a>=0)
    {
        b=a;
        while(b>=1)
        {
            if(b % 2 == 1)
            {
                k++;
            }
            b/=2;
        }
        a--;
    }
    printf("B(n) = %d",k);
    return 0;
}
