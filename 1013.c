#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d%d%d",&a,&b,&c);
    x = a;
    if(a<b || a<c)
    {
        if(b<c)
     {
        x=b;
     }
        else
     {
        x=c;
     }
    }
     printf("%d eh o maior\n",x);

 return 0;
}
