#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float num, base, resultado;
    printf("insira o numero:\n");
    scanf("%f", &num);
    printf("insira a base:\n");
    scanf("%f", &base);
    resultado = log(num)/log(base);
    printf("o resultado e: %f", resultado);
    return EXIT_SUCCESS;
}
