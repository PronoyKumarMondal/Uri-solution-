#include <stdio.h>

int main()
{
    int a, b, c, v, x;
    while(scanf("%d %d %d", &a, &b, &c) && (a || b || c))
    {
        v = a * b * c;
        x = (int) cbrt(v);// cbrt-cuberoot
        printf("%d\n", x);
    }
    return 0;
}
