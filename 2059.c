#include <stdio.h>
int main()
{
    int p, j1, j2, r, a, x, sum;
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
    sum = j1 + j2;
    if((sum%2==0 && p==1) || (sum%2==1 && p==0))
    {
        x = 1;
    }
    else
    {
        x = 2;
    }
    if((r==1 && a==0) || (r==0 && a==1))
    {
        x = 1;
    }
    else if(r==1 && a==1)
    {
        x=2;
    }
    printf("Jogador %d ganha!\n", x);
    return 0;
}
