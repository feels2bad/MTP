#include<stdio.h>
#include<stdlib.h>
#include"matriz.h"
Matriz multiplicarMatrizes (Matriz A, Matriz B)
{
    Matriz C;
    C = criarMatriz(A.lin,B.col);
    int linha, coluna, i, acum;
    if(A.col==B.lin)
    {
        for(linha=0;linha<A.lin;linha++)
        {
            for(coluna=0;coluna<B.col;coluna++)
            {
                acum=0;
                for(i=0;i<A.col;i++)
                {
                    acum = acum+A.m[linha][i]*B.m[i][coluna];
                }
                C.m[linha][coluna] = acum;
            }
        }

    }
    else
        printf("nao e possivel multiplicar as matrizes");
    return C;
}

int main()
{
    Matriz A;
    Matriz B;
    Matriz C;
    int linA, colA, linB, colB;
    printf("dimensoes de A:");
    scanf("%d",&linA);
    scanf("%d",&colA);
    printf("dimensoes de B:");
    scanf("%d",&linB);
    scanf("%d",&colB);
    A = criarMatriz(linA,colA);
    B = criarMatriz(linB,colB);
    preencherMatriz(A);
    preencherMatriz(B);
    C = multiplicarMatrizes(A,B);
    imprimirMatriz(C);
    destruirMatriz(A);
    destruirMatriz(B);
    destruirMatriz(C);
    EXIT_SUCCESS;
}
