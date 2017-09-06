#include<stdio.h>
int main()
{
    float base, altura, area;
    printf("insira a base:");
    scanf("%f",&base);getchar();
    printf("\ninsira a altura:");
    scanf("%f",&altura);getchar();
    area=base*altura*0.5;
    printf("\na area e:%f",area);
    return 0;
}
