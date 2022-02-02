#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        if(i%2!=0)
        {
            for(j=15;j>4;j--)
            {
                printf("I=%d J=%d\n",i,j);
            }
        }
    }
    return 0;
}
