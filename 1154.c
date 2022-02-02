#include<stdio.h>
int main()
{
    int n,b=0,i=0;
    double l;
    while(1)
    {
        scanf("%d",&n);
        if(n<0)
        {
            break;
        }
        else
        {
          b=b+n;
           i++;
        }
    }
    l=((b*1.00)/(i*1.00));
    printf("%.2lf",l);
}
