#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
    int vet[N], i, soma, produto;
    for(i=0;i<N;i++)
    {
        printf("\ninsira o termo %d:",i);
        scanf("%d",&vet[i]);
    }
    for(i=0,soma=0,produto=1;i<N;i++)
    {
        soma+=vet[i];
        produto*=vet[i];
    }
    printf("a soma deles sera: %d",soma);
    printf("\no produto deles sera: %d", produto);
    return EXIT_SUCCESS;
}
