#include <stdio.h>
#include<math.h>

int main()
{
   double a,b,c,R1,R2;
    scanf("%lf %lf %lf", &a, &b, &c);
   if(((b*b)-4*a*c)<a||a==0)
   {
        printf("Impossivel calcular");
   }
   else {
    printf("R1=%.5lf\nR2=%.5lf\n",R2=(-b-(sqrt((b * b) - 4 * a * c)))/(2*a) , R1=(-b+(sqrt((b * b) - 4 * a * c)))/(2*a) );
   }
        return 0;
}
