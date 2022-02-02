#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    j=(n+11);
    for(i=n;i<=j;i++)
    {
       if((i%2)!=0)
       {
           printf("%d\n",i);
       }
    }

    return 0;
}
