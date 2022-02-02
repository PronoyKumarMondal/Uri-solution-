#include<stdio.h>
int main()
{
    int a[5];
    scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    if((a[4]>a[3])&&(a[3]>a[2])&&(a[2]>a[1])&&(a[1]>a[0]))
    {
        printf("C\n");
    }
    else if((a[4]<a[3])&&(a[3]<a[2])&&(a[2]<a[1])&&(a[1]<a[0]))
    {
        printf("D\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}
