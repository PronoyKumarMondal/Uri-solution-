#include <stdio.h>

int main()
{
    int n, s=0, x, i;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &x);
        for(i=0,s=0; i<x; i++)
            s += pow(2, i);
        printf("%d\n", s);
    }
    return 0;
}

