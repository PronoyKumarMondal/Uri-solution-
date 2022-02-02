#include<stdio.h>
int main()
{
    int n,i;
    double x,y,z,a=0,b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf%lf%lf",&x,&y,&z);
        a=(2+3+5);
        b=((x*2)+(y*3)+(z*5));
        printf("%.1lf",(b/a));
    }
    return 0;
}
