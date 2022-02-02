#include<stdio.h>
int main()
{
    int n,x,y;
    char c;
    scanf("%d",&n);
    scanf("%d %c %d",&x,&c,&y);
    if(c=='+')
    {
        if((x+y)<=n)
        {
            printf("OK\n");
        }
        else
        {
            printf("OVERFLOW\n");
        }
    }
    else
    {
        if((x*y)<=n)
        {
            printf("OK\n");
        }
        else
        {
            printf("OVERFLOW\n");
        }
    }


    return 0;
}
