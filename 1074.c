#include<stdio.h>
int main()
{
    int n,i,x,a=0,b=0,c=0,d=0,e=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d",&x);

        if(x==0)
        {
            printf("NULL\n");
        }
        else if(x>0)
        {

            if(x%2==0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
         else

        {
              if(x%2==0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }

    }

    return 0;
}
