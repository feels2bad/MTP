#include<stdio.h>
#include<stdlib.h>
void restoequociente(int a,int b,int *resto,int *quociente)
{
    *resto = a%b;
    *quociente = a/b;
}
int main()
{
    int a, b, quociente, resto;
    printf("insira o primeiro numero:");
    scanf("%d",&a);
    printf("insira o segundo numero:");
    scanf("%d",&b);
    restoequociente(a,b,&resto,&quociente);
    printf("o quociente de %d por %d e: %d, e o resto e:%d\n\n",a,b,quociente,resto);
    return EXIT_SUCCESS;
}
