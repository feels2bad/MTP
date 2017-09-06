#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int x1, x2, x3, x4, x5, cont=0;
    printf("insira um divisor de 8192:");
    scanf("%i",&x1);getchar();
    if(8192%x1==0)
    {
        cont++;
    }
    x2=1328+rand()%(1360-1328+1);
    printf("\ninsira o resultado da soma %i com 101:",x2);
    scanf("%i",&x3);getchar();
    if(x3==x2+101)
    {
        cont++;
    }
    x4=rand()%(100);
    printf("\ninsira o resultado do produto entre %i e 3:",x4);
    scanf("%i",&x5);getchar();
    if(x5==x4*3)
    {
        cont++;
    }
    printf("\na pontuacao foi:%i",cont);
    return 0;
}
