#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10000
int main()
{
    srand(time(0));
    int vet[N];
    int i, maximo;
    float media=0.f;
    printf("insira um numero inteiro nao negativo");
    scanf("%d",&maximo);
    for(i=0;i<N;i++)
    {
        vet[i]=rand()%(maximo+1);
    }
    for(i=0;i<N;i++)
    {
        media+=vet[i];
    }
    media/=N;
    printf("a media dos %d numeros e:%f", N,media);
    return EXIT_SUCCESS;
}
