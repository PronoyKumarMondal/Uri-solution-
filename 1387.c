#include <stdio.h>

int main() {

    int x,y,a;
    while(1)
    {
        a=0;
        scanf("%d%d",&x,&y);
        if(x==0&&y==0)
        {
            break;
        }
        a=x+y;
        printf("%d",a);

    }

    return 0;
}
