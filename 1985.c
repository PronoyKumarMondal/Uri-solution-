#include <stdio.h>
int main()
{
    int t, c, q;
    double a = 0.00;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &c, &q);
        if(c==1001)
        {
            a += (double) q*1.50;
        }

        else if(c==1002)
        {
            a += (double) q*2.50;
        }

        else if(c==1003)
        {
            a += (double) q*3.50;
        }

        else if(c==1004)
        {
            a += (double) q*4.50;
        }

        else if(c==1005)
        {
             a += (double) q*5.50;
        }

    }
    printf("%.2lf\n", a);
    return 0;
}
