#include<stdio.h>
#include<stdlib.h>
int soma (int num1, int den1, int num2, int den2, int *resnum, int *resden)
{
    if(den1==0||den2==0)
    {
        return 0;
    }
    else
    {
        *resnum = (num1 * den2) + (num2 * den1);
        *resden = (den1 * den2);
        return 1;
    }
}
int main()
{
    int num1, den1, num2, den2, resnum, resden;
    printf("entre com o numero racional na forma de fracao:");
    scanf("%d/%d",&num1,&den1);
    printf("entre com outro numero racional na forma de fracao:");
    scanf("%d/%d",&num2,&den2);
    if(soma(num1, den1, num2, den2, &resnum, &resden))
    {
         printf("o resultado sera: %d/%d\n",resnum,resden);
    }
    else
    {
        printf("erro!");
    }
    return EXIT_SUCCESS;
}
