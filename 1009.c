#include<stdio.h>
int main()
{
    char a[20];
    double b,c;
    scanf("%s %lf %lf",&a,&b,&c);

    printf("TOTAL = R$ %.2lf\n",(b+((c*15)/100)));
    return 0;
}
