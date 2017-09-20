#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 256
int main()
{
    int i, cont;
    char frase[N];
    printf("Entre com uma frase:\n");
    fgets(frase,N,stdin);
    i=0;
    for(i=0,cont=0;frase[i];i++)
    {
        if(isalpha(frase[i]))
        {
            cont++;
        }
    }
    printf("o numero de letras e:%i\n",cont);
    return EXIT_SUCCESS;
}
