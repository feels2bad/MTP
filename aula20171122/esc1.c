#include<stdio.h>
#include<stdlib.h>

int main()
{
    char x;
    FILE * arquivo;
    arquivo = fopen("texto.txt","r");
    printf("insira o texto, sendo que 1 encerra: ");
    scanf("%c",&x);
    if(x!='1')
    {
        fputc(x,arquivo);
    }

    fscanf(arquivo,"%s");
    fclose(arquivo);

    return EXIT_SUCCESS;
}


