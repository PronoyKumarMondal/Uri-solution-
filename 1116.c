#include<stdio.h>
int main()
{
    int n,i,x,y;
    double a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            a=((x*1.0)/(y*1.0));
            printf("%.1lf\n",a);
        }
    }
}
