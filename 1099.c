#include<stdio.h>
int main()
{
    int n,x,y,i,j,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);

        if(x==y)
        {
            printf("0\n");
        }
        else if(x>y)
        {   s=0;
            for(j=y+1;j<x;j++)
            {
                if(j%2!=0)
                {
                    s+=j;
                }
            }
            printf("%d\n",s);
        }
        else
        {
            s=0;
            for(j=x+1;j<y;j++)
            {
                if(j%2!=0)
                {
                  s+=j;
                }

            }
            printf("%d\n",s);
        }
    }
    return 0;
}
