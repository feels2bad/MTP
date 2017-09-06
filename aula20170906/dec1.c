#include<stdio.h>
int main()
{
    int x;
    printf("insira o numero:");
    scanf("%i",&x);getchar();
    if(x%2==0)
    {
        printf("\npar ");
        if(x%3==0)
        {
            printf("e divisivel por 3 ");
        }
        if(x%7==0)
        {
            printf("e divisivel por 7")
        }
    }
    if(x%2!=0)
    {
        printf("\nimpar ");
        if(x%5==0)
        {
            printf("e divisivel por 5");
        }
    }
    return 0;
}
