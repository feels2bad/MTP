#include<stdio.h>
int main()
{
    int num, i, fat;
    printf("insira o numero:");
    scanf("%i",&num);getchar();
    fat=1;
    for(i=0;i<num;i++)
    {
        fat=fat*(num-i);
    }
    printf("%i! =%i",num, fat);
    return 0;
}
