#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define pi 3.14
int main()
{
    float a, b, c, a2;
    printf("insira o valor de b\n");
    scanf("%f",&b);
    printf("insira o valor de c\n");
    scanf("%f",&c);
    printf("insira o valor de A\n");
    scanf("%f",&a2);
    a = sqrt(pow(b,2)+pow(c,2)-2*b*c*cos(a2));
    printf("o outro lado tem valor de:%f", a);
    return EXIT_SUCCESS;
}
