#include<stdio.h>
int main()
{
    int x,y,t=0,i,s=0;
    scanf("%d %d",&x,&y);
    if(y>x)
    {
        t=x;
        x=y;
        y=t;
    }
    for(i=y;i<=x;i++)
    {
        if(i%13!=0)
        {
            s=s+i;
        }
    }
    printf("%d\n",s);
}
