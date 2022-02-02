#include<stdio.h>
int main()
{
    int n,x,i,p=0,q=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x>=10&&x<=20)
        {
            p++;
        }
        else
        {
            q++;
        }
    }
    printf("%d in\n",p);
    printf("%d out\n",q);
}
