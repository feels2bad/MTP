#include<stdio.h>
#include<stdlib.h>
#define N 4
int main()
{
    int vet[N]={0};
    int i;
    char *pont=vet;
    for(i=0;i<N;i++)
    {
        printf("insira o termo da posicao %d:",i);
        scanf("%d",&vet[i]);
    }
    for(i=0;i<sizeof(vet);i++)
    {
        printf("%c",pont[i]);
    }
    return EXIT_SUCCESS;
}
