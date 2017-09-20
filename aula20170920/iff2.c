#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num, i=0;
    float n1, s1=0.0;
    double n2, s2=0.0;
    printf("insira um numero inteiro:\n");
    scanf("%i",&num);
    n1=1/num;
    n2=1/num;
    for(i=0;i<730;i++)
    {
        s1=s1+1/n1;
        s2=s2+1/n2;
    }
    printf("%f,%f", s1, s2);
    return EXIT_SUCCESS;
}
