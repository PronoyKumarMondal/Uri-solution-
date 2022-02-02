#include <stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if((a>=(b+c))||(a==b==c))
    {   printf("NAO FORMA TRIANGULO\n");
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((a>=(b+c))||(a==b||b==c||a==c))
    {   printf("NAO FORMA TRIANGULO\n");
        printf("TRIANGULO ISOSCELES\n");
    }
     else if((a*a==(b*b+c*c))||(a==b==c))
    {   printf("TRIANGULO RETANGULO\n");
        printf("TRIANGULO EQUILATERO\n");
    }
     else if((a*a==(b*b+c*c))||(a==b||b==c||a==c))
    {   printf("TRIANGULO RETANGULO\n");
        printf("TRIANGULO ISOSCELES\n");
    }
     else if((a*a>(b*b+c*c))||(a==b==c))
    {   printf("TRIANGULO OBTUSANGULO\n");
        printf("TRIANGULO EQUILATERO\n");
    }
     else if((a*a>(b*b+c*c))||(a==b||b==c||a==c))
    {   printf("TRIANGULO OBTUSANGULO\n");
        printf("TRIANGULO ISOSCELES\n");
    }
     else if((a*a>(b*b+c*c))||(a==b==c))
    {   printf("TRIANGULO ACUTANGULO\n");
        printf("TRIANGULO EQUILATERO\n");
    }
     else if((a*a>(b*b+c*c))||(a==b||b==c||a==c))
    {   printf("TRIANGULO ACUTANGULO\n");
        printf("TRIANGULO ISOSCELES\n");
    }
    else if(a>=(b+c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(a*a==(b*b+c*c))
    {
        printf ("TRIANGULO RETANGULO\n");
    }
    else if(a*a>(b*b+c*c))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(a*a<(b*b+c*c))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }



    return 0;
}
