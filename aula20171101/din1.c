#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float media (float * numeros, int quantidade)
{
    int i;
    float m = 0.0f;
    for(i=0;i<quantidade;i++)
    {
        m += numeros[i];
    }
    m /= quantidade;
    return m;
}
float desvio (float * numeros, int quantidade)
{
    int i;
    float dp = 0.0f;
    float m = media(numeros,quantidade);
    for(i=0;i<quantidade;i++)
    {
        dp += pow(numeros[i]-m,2);
    }
    dp /= quantidade-1;
    return sqrt(dp);
}
int main()
{
    int i;
    int quantidade;
    float * numeros;
    printf("quantos numeros serao precisos?");
    scanf("%d",&quantidade);
    numeros = (float *) malloc(quantidade*sizeof(int));
    for(i=0;i<quantidade;i++)
    {
        printf("entre com o %do numnero",i);
        scanf("%f",numeros+i);
    }
    printf("a media dos numeros e: %f", media(numeros,quantidade));
    printf("o desvio padrao dos numeros e: %f", desvio(numeros,quantidade));

    free(numeros);
    return 0;
}
