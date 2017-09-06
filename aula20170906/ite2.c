#include<stdio.h>
int main()
{
    int B, P, t=1, p;
    printf("insira a base:");
    scanf("%i",&B);getchar();
    printf("\ninsira a potencia:");
    scanf("%i",&P);getchar();
    for(p=P;p>0;p--)
    {
        t=t*B;
    }
    printf("%i",t);
    return 0;
}
