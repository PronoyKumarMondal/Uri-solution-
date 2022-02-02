#include<stdio.h>
int main()
{
    int n,x,i,j,b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        for(j=1;j<x;j++)
        {
            if((x%j)==0)
            {
                b=b+j;
            }

        }
        if(b==x)
        {
            printf("%d eh perfeito\n",x);
        }
        else
        {
            printf("%d nao eh perfeito\n",x);
        }
        b=0;
    }
    return 0;
}

