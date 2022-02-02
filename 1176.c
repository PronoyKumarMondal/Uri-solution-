#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        if(b==0)
        {
             printf("Fib(b) = %d",b);
        }
        else
        {
          printf("Fib(b) = %d",b-1);
        }
        }



    return 0;
}
