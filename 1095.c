#include<stdio.h>
int main()
{
    int i,j,k=1,x=60;
    for(i=1;i<14;i++)
    {
        if(i>1)
        {
            k=(k+3);
            x=(60-(5*(i-1)));
        }

        printf("I=%d J=%d\n",k,x);
    }
    return 0;

}
