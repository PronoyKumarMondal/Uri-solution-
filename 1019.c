#include<stdio.h>
int main()
{
    int s,x,y,z;
    scanf("%d",&s);
    x=(s/(60*60));
    y=((s/60)-(x*60));
    z= (s-((x*(60*60))+(y*60))) ;
    printf("%d:%d:%d\n",x,y,z);
    return 0;
}
