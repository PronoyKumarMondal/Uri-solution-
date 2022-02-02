#include<stdio.h>
int main()
{
    int n,i,j,d=1,c=4;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=d;j<=c;j++)
        {
            if(j%4==0)
            {
                printf("PUM\n");
            }
            else
            {
                printf("%d ",j);
            }

        }
             c=c+4;
             d=d+4;

    }
    return 0;
}
