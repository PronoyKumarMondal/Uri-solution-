#include<stdio.h>
int main()
{
    int x,y,i,t=0;
    scanf("%d%d",&x,&y);
    if(y>x)
    {
        t=x;
        x=y;
        y=t;
    }
    if(x>0 && y>0)
    { i=y;
        while(i<x)
    {
        if(i%5==3)
        {
            printf("%d\n",i);
        }
        if(i%5==2)
        {
            printf("%d \n",i);
        }


    }
    }
    return 0;
}
