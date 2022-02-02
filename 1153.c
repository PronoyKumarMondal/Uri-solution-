#include<stdio.h>
int main()
{
    int n,i,k=0,l=1;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        k=(n-i);
        l=l*k;
    }
    printf("%d\n",(l*n));

    return 0;
}
