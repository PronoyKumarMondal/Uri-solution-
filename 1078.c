#include<stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        x=(i*n);
        printf("%d x %d = %d\n",i,n,x);
    }

    return 0;
}
