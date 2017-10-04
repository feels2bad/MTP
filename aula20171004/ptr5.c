#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int vet[1000];
    unsigned char *pont=(unsigned char *)vet;
    int i;
    int num;
    int cont=0;
    for(i=0;i<1000;i++)
    {
        vet[i]=rand()%RAND_MAX;
    }
    printf("escolha o numero entre 0 e 255:\n");
    scanf("%d",&num);
    for(i=0;i<sizeof(vet);i++)
    {
        if(num==pont[i])
        {
            printf("%p:%i\n",pont+i,pont[i]);
            cont++;
        }

    }
    printf("%d bytes sao iguais ao numero escolhido, sendo que o numero era %d,o vetor se inicia no end.:%p e termina em %p",
           cont,num,pont,pont+i);
    return EXIT_SUCCESS;
}
