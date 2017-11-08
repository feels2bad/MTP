#include<stdio.h>
#include<stdlib.h>
#include"matriz.h"
Matriz produto_numero_matriz(Matriz A,double num)
{
    int i, j;
    for(i=0;i<A.lin;i++)
    {
        for(j=0;j<A.col;j++)
        {
            A.m[i][j] = (num)*(A.m[i][j]);
        }
    }
}
int main()
{
    Matriz A, adjA, inversA;
    int ordem;
    double determin, invdetermin;
    printf("insira ordem da matriz:");
    scanf("%d",&ordem);
    A = criarMatriz(ordem,ordem);
    preencherMatriz(A);
    determin = determinante(A);
    if(determin==0)
    {
        printf("a matriz nao e inversivel");
    }
    else
    {
        invdetermin = 1/determin;
        adjA = adjunta(A);
        inversA = produto_numero_matriz(adjA,invdetermin);
    }
    invdetermin = 1/determin;
    adjA = adjunta(A);
    inversA = produto_numero_matriz(adjA,invdetermin);
    imprimirMatriz(inversA);
    destruirMatriz(A);
    destruirMatriz(adjA);
    destruirMatriz(inversA);
    EXIT_SUCCESS;
}
