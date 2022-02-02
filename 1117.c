#include<stdio.h>
int main()
{

    double x,d=0,s=0,a;
    while(1)
    {

        if(s==2)
        {
            break;
        }
        scanf("%lf",&x);
       if(x>=0 && x<=10)
        {
            s++;
            d+=x;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    a=(d/2.00);
    printf("media = %.2lf\n",a);
    return 0;
}

