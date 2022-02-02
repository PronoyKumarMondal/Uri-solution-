#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f,g;
    scanf("%d",&n);
    printf("%d\n",n);
    a= n/100;
    printf("%d nota(s) de R$ 100,00\n",a);
    a= n%100;
    b= a/50;
    printf("%d nota(s) de R$ 50,00\n",b);
    b= a%50;
    c= b/20;
    printf("%d nota(s) de R$ 20,00\n",c);
    c= b%20;
    d= c/10;
    printf("%d nota(s) de R$ 10,00\n",d);
    d= c%10;
    e= d/5;
    printf("%d nota(s) de R$ 5,00\n",e);
    e= d%5;
    f= e/2;
    printf("%d nota(s) de R$ 2,00\n",f);
    f= e%2;
    g= f/1;
    printf("%d nota(s) de R$ 1,00\n",g);



    return 0;
}
