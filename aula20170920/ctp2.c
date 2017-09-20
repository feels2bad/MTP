#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 256
int main()
{
    int i;
    char frase[N];
    printf("Entre com uma frase:\n");
    fgets(frase,N,stdin);
    i=0;
    for(i=0;frase[i];i++)
    {
        frase[i] = tolower(frase[i]);
    }
    printf("%s",frase);
    return EXIT_SUCCESS;
}
