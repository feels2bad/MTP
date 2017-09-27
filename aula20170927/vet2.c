#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
    int vet[N], i, j, aux;
    for(i=0;i<N;i++)
    {
        printf("\ninsira o termo %d:",i);
        scanf("%d",&vet[i]);
    }
    for(i=0,j=N-1;i<N/2;i++,j--)
    {
        aux=vet[i];
        vet[i]=vet[j];
        vet[j]=vet[i];
    }
    for(i=0;i<N;i++)
    {
        printf("%d, ",vet[i]);
    }
    return EXIT_SUCCESS;
}
