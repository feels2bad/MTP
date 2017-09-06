#include<stdio.h>
int main()
{
    int x, i, f=0;
    printf("insira um numero:");
    scanf("%i",&x);getchar();
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            f=1;
        }

    }
    if(f==1)
    {
        printf("\nnao e primo");
    }
    else
    {
        printf("\ne primo");
    }
    return 0;
}
