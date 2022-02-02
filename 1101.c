#include<stdio.h>
int main()
{
    int x,y,i,s=0;

 while(1)
 {
     scanf("%d%d",&x,&y);
     if(x<=0 || y<=0)
     {
         break;
     }
     else
     {
        s=0;

     if(x>y)
     {
         for(i=y;i<=x;i++)
         {
             s+=i;
             printf("%d ",i);
         }
         printf("Sum=%d",s);
     }
     if(y>x)
     {
         for(i=x;i<=y;i++)
         {
             s+=i;
             printf("%d ",i);
         }
         printf("Sum=%d",s);
     }
 }
 }
    return 0;
}
