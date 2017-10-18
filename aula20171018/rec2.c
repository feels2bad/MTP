#include<stdio.h>
#include<stdlib.h>
int inverter(char *str)
{
    if(*str)
    {
        inverter(str+1);
        printf("%c",*str);
    }
}
int main()
{
    char str[30];
    printf("insira a frase:\n");
    fgets(str, 29, stdin);
    inverter(str);
    return EXIT_SUCCESS;
}
