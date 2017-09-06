#include<stdio.h>
int main()
{
    int t=1, x, i=2;
    printf("insira o numero:");
    scanf("%i",&x);
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            t=t+i;
        }
    }
    if(t==x)
    {
        printf("\no numero inserido e perfeito");
    }
    else
    {
        printf("\no numero inserido nao e perfeito");
    }
    return 0;
}
