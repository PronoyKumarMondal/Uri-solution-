#include <stdio.h>

int main()
{
   float x;
   scanf("%f",&x);
   if(x>=0.00&&x<=2000.00)
   {
       printf("Isento\n");
   }
   else if(x>=2000.01&&x<=3000.0)
   {
    printf("R$ %.2f\n",(((0*2000)/100)+(8*(x-2000)/100)));
   }
   else if(x>=3000.01&&x<=4500.0)
   {
       printf("R$ %.2f\n",(((0*2000)/100)+((8*1000)/100)+(((x-3000)*18)/100)));
   }
   else
   {
       printf("R$ %.2f\n",(((0*2000)/100)+((8*1000)/100)+((18*1500)/100)+(((x-4500)*28)/100)));
   }


    return 0;
}
