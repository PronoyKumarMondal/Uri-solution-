#include<stdio.h>
int main()
{   int s=0;
    double a,b,c,d,e,f,x=0;
    scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
    if(a>0)
    {
      s=s+1;
      x=x+a;
    }
    if(b>0)

    {
        s=s+1;
        x=x+b;
    }
     if(c>0)

    {
        s=s+1;
        x=x+c;
    }
     if(d>0)

    {
        s=s+1;
        x=x+d;
    }
    if(e>0)

    {
        s=s+1;
        x=x+e;
    }

    if(f>0)

    {
        s=s+1;
        x=x+f;
    }

    printf("%d valores positivos\n",s);
    printf("%.1lf\n",(x/s));

    return 0;
}

