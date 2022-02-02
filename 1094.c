#include<stdio.h>
int main()
{
    int n,x,h,a=0,b=0,d=0,e=0;
    double f=0,g=0,k=0;
    char c[10];
    scanf("%d",&n);
    for(h=1;h<=n;h++)
    {
       scanf("%d%s",&x,&c[0]);

       if(c[0]=='C')
       {
           a+=x;
       }
       else if(c[0]=='R')
       {
           b+=x;
       }
       else if(c[0]=='S')
       {
           d+=x;
       }
    }
    e=(a+b+d);
    f=((a/(e*1.00))*100);
    g=((b/(e*1.00))*100);
    k=((d/(e*1.00))*100);
printf("Total: %d cobaias\n",e);
printf("Total de coelhos: %d\n",a);
printf("Total de ratos: %d\n",b);
printf("Total de sapos: %d\n",d);
printf("Percentual de coelhos: %.2lf %\n",f);
printf("Percentual de ratos: %.2lf %%\n",g);
printf("Percentual de sapos: %.2lf %%\n",k);



return 0;
}
