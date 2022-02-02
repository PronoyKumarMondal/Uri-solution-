#include<stdio.h>
int main()
{
    int v,t;
    while(scanf("%d",&v)!=EOF)
    {
        scanf("%d",&t);
        printf("%d\n",(v*(t*2)));
    }

    return 0;
}
