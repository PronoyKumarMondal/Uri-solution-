#include<stdio.h>
int main()
{
    int a,n,i,b=0;
    scanf("%d%d",&a,&n);
    while(1)
    {

        if(n<=0)
        {
            scanf("%d",&n);
            continue;
        }
        else
        {
            break;
        }
    }
    //for(i=1;i<=n;i++)
    //{
      //  b=b+a;
      //  a++;

    //}
    printf("%d\n",((a*n)+1));
    return 0;
}
