#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        k=k+j;
    }
    printf("%d",k);
    return 0;
}
