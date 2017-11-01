#include <stdio.h>
#include <stdlib.h>
void transposta(int ** matriz,int m, int n)
{
    int i, j, aux;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j&&i>j)
            {
                aux = matriz[i][j];
                matriz[i][j] = matriz[j][i];
                matriz[j][i] = aux;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m, n;
    int i, j;
    int **matriz;
    printf("insira o numero de linhas:\n");
    scanf("%d",&m);
    printf("insira o numero de colunas:\n");
    scanf("%d",&n);
    matriz = malloc(m*sizeof(int*));
    for(i=0;i<m;i++)
    {
        matriz[i] = malloc(n*sizeof(int));
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("insira o termo da linha %d, e coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    transposta(matriz,m,n);
    for(i=0;i<m;i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}
