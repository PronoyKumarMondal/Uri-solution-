#include<stdio.h>
int main()
{
    int i;
    double a,b=0;
    for(i=1;i<101;i++)
    {
        a=(1/(i*1.00));
        b=b+a;
    }
    printf("%.2lf\n",b);

    return 0;
}
