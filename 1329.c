#include<stdio.h>
int main()
{
    int n,a,i,s=0,k=0;
    while(1)
    {
        scanf("%d",&n);
        s=0;
        k=0;
        if(n==0)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
          scanf("%d",&a);
          if(a==0)
          {
              s++;
          }
          else
          {
            k++;
          }
        }
        printf("Mary won %d times and John won %d times\n",s,k);
    }


    return 0;
}
