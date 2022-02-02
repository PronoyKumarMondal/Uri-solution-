#include<stdio.h>
int main()
{
    int a,b,c,d,e,s=0,x=0,y=0,z=0;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if((a%2)==0)
    {
       s=s+1;
    }
    if((b%2)==0)
    {
       s=s+1;
    }
    if((c%2)==0)
    {
       s=s+1;
    }
    if((d%2)==0)
    {
       s=s+1;
    }
    if((e%2)==0)
    {
       s=s+1;
    }
    printf("%d valores pares\n",s);
    if((a%2)!=0)
    {
       x=x+1;
    }
    if((b%2)!=0)
    {
        x=x+1;
    }
    if((c%2)!=0)
    {
        x=x+1;
    }
    if((d%2)!=0)
    {
        x=x+1;
    }
    if((e%2)!=0)
    {
        x=x+1;
    }
    printf("%d valor(es) impar(es)\n",x);
     if(a>0)
    {
      y=y+1;
    }
    if(b>0)

    {
        y=y+1;
    }
     if(c>0)

    {
        y=y+1;
    }
     if(d>0)

    {
        y=y+1;
    }
    if(e>0)

    {
        y=y+1;
    }


    printf("%d valor(es) positivo(s)\n",y);
       if(a<0)
    {
      z=z+1;
    }
    if(b<0)

    {
        z=z+1;
    }
     if(c<0)

    {
        z=z+1;
    }
     if(d<0)

    {
        z=z+1;
    }
    if(e<0)

    {
        z=z+1;
    }


    printf("%d valor(es) negativo(s)\n",z);
    return 0;
}
