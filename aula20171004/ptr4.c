#include<stdio.h>
#include<stdlib.h>
int main()
{
    float x,y,z;
    float *pont;
    printf("insira o valor de x:\n");
    scanf("%f",&x);
    printf("insira o valor de y:\n");
    scanf("%f",&y);
    printf("endereço de x:%p\n",&x);
    printf("endereço de y:%p\n",&y);
    z=x+y;
    pont =&x;
    printf("x esta armazenado em:%p, e contem:%f\n",pont,*pont);
    pont = &y;
    printf("y esta armazenado em:%p, e contem:%f\n",pont,*pont);
    pont = &z;
    printf("z esta armazenado em:%p, e contem:%f\n",pont,*pont);
    return EXIT_SUCCESS;
}
