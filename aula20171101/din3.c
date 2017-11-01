#include<stdio.h>
#include<stdlib.h>

int main()
{
    int tamanho=1;
    int i;
    char *texto;
    char teste;
    texto = malloc(tamanho*(sizeof(char)));
    printf("insira o texto, sendo que 0 encerra:\n");
    for(i=0;i<tamanho;i++)
    {
        scanf("%c",&teste);
        if(teste=='0')
        {
            break;
        }
        else
        {
            texto[i]==teste;
            realloc(texto,1*sizeof(char));
        }

    }
    return 0;
}
