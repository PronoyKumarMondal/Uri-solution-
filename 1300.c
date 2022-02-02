#include <stdio.h>
int main()
{
    int g, i, j, a, t;

    while(scanf("%d",&g) != EOF)
    {
        j = 0;
        t = 0;
        for(i = 0; i < 60; i++)
        {
            if(i%5 == 0)
            {
                j++;
            }
            a = i*6 - j*6;
            if(g == a || g == -a)
            {
                t = 1;
                break;
            }
        }
        if(t == 1)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}
