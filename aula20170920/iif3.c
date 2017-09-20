#include<stdio.h>
int main()
{
    float num, i, fat;
    printf("insira o numero:");
    scanf("%f",&num);getchar();
    fat=1;
    for(i=0;i<num;i++)
    {
        fat=fat*(num-i);
    }
    printf("%f! =%f",num, fat);
    return 0;
}
