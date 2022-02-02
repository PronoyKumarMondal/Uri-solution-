#include<stdio.h>
int main()
{
    double a,b,c,d,l,s=0;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    s=(((a*2)+(b*3)+(c*4)+(d*1))/10);
    printf("Media: %.1lf\n",s);

    if(s>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(s>=5.0 && s<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&l);
        printf("Nota do exame: %.1lf\n",l);

        if(((l+s)/2)>=5)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",((l+s)/2));
        }
        else
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %lf\n",((l+s)/2));
        }
    }
    else
    {
        printf("Aluno reprovado.\n");
    }



    return 0;
}
