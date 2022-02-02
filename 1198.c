
#include<stdio.h>

int main()
{
    long long int a, b, d;
    while(scanf("%lld %lld",&a, &b)!=EOF)
    {
        if(a>=b)
        {
            d = a-b;
        }
        else
        {
            d = b-a;
        }
        printf("%lld\n",d);
    }
    return 0;
}
