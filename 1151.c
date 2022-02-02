#include<stdio.h>

int main()

{
    int n,c,i=0,j=1,fibo=0;
    scanf("%d",&n);

    for(c=0;c<n;c++)
    {
        if(c<=1)
        {
          fibo=c;
        }
        else
        {
            fibo=i+j;
            i=j;
            j=fibo;
        }

        printf("%d",fibo);

      if(c<n-1)
        {
            printf(" ");
        }

    }

printf("\n");

    return 0;
}
