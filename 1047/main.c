#include <stdio.h>

int main()
{
   int a,b,c,d;
   scanf("%d %d %d %d",&a,&b,&c,&d);
   if(a>c)
   {
      if(b==d)
       {
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",(c+24)-a);
       }
       else if(b>d)
       {
           printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(c+24)-a,(d+60)-b);
       }
       else
       {
          printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(c+24)-a,d-b);
       }
   }
   else if(a==c)
   {
       if(b==d)
       {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
       }
       else if(b>d)
       {
           printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",(d+60)-b);
       }
       else
       {
          printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",d-b);
       }
   }


   else
   {
        if(b==d)
       {
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",c-a);
       }
       else if(b>d)
       {
           printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a,(d+60)-b);
       }
       else
       {
          printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a,d-b);
       }
   }


    return 0;
}


