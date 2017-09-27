#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 1000
int main()
{
    srand(time(0));
    int vet[N];
    int numelem, i, max, min;
    printf("insira um numero nao negativo entre 1 e 1000: ");
    scanf("%d",&numelem);
    for(i=0;i<numelem;i++)
    {
        vet[i]=rand()%(10);
    }
    for(i=0,max=0,min=0;i<numelem;i++)
    {
        if(vet[i]>max)
        {
            max=vet[i];
        }
        if(vet[i]<min)
        {
            min=vet[i];
        }
    }
    printf("\no valor maximo e: %d",max);
    printf("\no valor minimo e: %d",min);
    return EXIT_SUCCESS;
}
