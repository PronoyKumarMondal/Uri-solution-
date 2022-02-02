#include<stdio.h>
int main()
{
    int i;
    double a,b=0,c=1;
    for(i=1; i<40; i++)
    {
        if(i%2!=0)
        {
            a=(i/c);
            b =(b+a);
            c = c*2;
        }
   }
    printf("%.2lf\n",b);

    return 0;
}

