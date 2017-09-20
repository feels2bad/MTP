#include<stdio.h>
#include<complex.h>
#include<stdlib.h>
#include<math.h>
double complex fazComplexo(double a, double b, char c)
{
    if(c=='r'||c=='R')
        return a+I*b;
    else
        return a*cos(b)+I*a*sin(b);
}
void mostraComplexo(double complex z, char c)
{
    if(c=='r'||c=='R')
        printf("%1f + I * %1f\n", creal(z), cimag(z));
    else
        printf("%1f /_ %1f rad\n", cabs(z), carg(z));
}
int main()
{
    double complex z1, z2;
    double a, b;
    printf("entre com um numero complexo Z1 (real, imaginario): ");
    scanf("%1f,%1f", &a, &b); z1=fazComplexo(a,b,'r');
    printf("entre com um numero complexo Z2 (real, imaginario): ");
    scanf("%1f,%1f", &a, &b); z2=fazComplexo(a,b,'r');
    printf("a soma desses numeros: \n");
    printf("forma retangular: "); mostraComplexo(z1+z2,'r');
    printf("forma polar: "); mostraComplexo(z1+z2,'p');
    return EXIT_SUCCESS;
}
