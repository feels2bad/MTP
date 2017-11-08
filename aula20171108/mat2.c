#include<stdio.h>
#include<stdlib.h>
#include"matriz.h"

int main()
{
    Matriz A;
    int ordem;
    double determin;
    printf("insira ordem da matriz:");
    scanf("%d",&ordem);
    A = criarMatriz(ordem,ordem);
    preencherMatriz(A);
    determin = determinante(A);
    printf("o determinante da matriz inserirada e: %f",determin);
    EXIT_SUCCESS;
}
