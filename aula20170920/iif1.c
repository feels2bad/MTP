#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    sranf(time(0));
    float probuser;
    int i, cont=0;
    printf("entre com uma probabilidade[0.0~1.0]: ");
    scanf("%f", &probuser);
    for(i=0;i<1000;i++)
    {
        if((float)rand()/(float)RAND_MAX<probuser)
            cont++;
    }
    printf("contagem em 1000: %d\n", contagem);
    return EXIT_SUCCESS;
}
