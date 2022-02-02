#include <stdio.h>

int main()
{
    int a,b,c,d,x,y,p,q;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if ((a==c)&&(b==d))
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(a<c)
    {
        x=c-a;
        if(b==d)
        {
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",x);
        }
        else if(b<d)
        {
            p=d-b;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,p);
        }
        else if(b>d)
        {
            x--;
            q=(60-b)+d;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,q);
        }
    }
    else if(a>c)
    {
        y=(24-a)+c;
        if(b==d)
        {
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",y);
        }
        else if(b<d)
        {
            p=(60-d)+b;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",y,p);
        }
        else if(b>d)
        {
            y--;
            q=(60-b)+d;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",y,q);
        }
    }
    else if((a==c)&&(b<d))
    {
        p=d-b;
        printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",p);
    }
    else if((a==c)&&(b>d))
    {
        q=(60-b)+d;
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",q);
    }



    return 0;
}
