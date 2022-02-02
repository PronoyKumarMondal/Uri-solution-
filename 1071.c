#include<stdio.h>
int main()
{
    int x,y,s=0,i,z=0;
    scanf("%d%d",&x,&y);
    if(y>x)
   {
    z=y;
    y=x;
    x=z;
   }
    for(i=y+1;i<x;i++)
    {
     if((i%2)!=0)
        {
           s=(s+i);

        }
    }

    printf("%d\n",s);
    return 0;
}
