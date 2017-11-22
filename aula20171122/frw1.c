#include<stdio.h>
#include<stdlib.h>
#define N 100
int menu()
{
    int opc;
    do{
    fprintf(stdout, "1 - informar\n");
    fprintf(stdout, "2 - resgatar\n");
    fprintf(stdout, "3 - sair\n");
    fscanf(stdin,"%d",&opc);
    }while(opc!=1&&opc!=2&&opc!=3);
    return opc;
}
void informar()
{
    FILE * arquivo;
    char nome[N];
    int idade;
    float altura;
    arquivo = fopen("info.txt","w");
    printf("entre com o nome: ");
    scanf("%s",&nome);
    printf("entre com a idade [somente em anos]: ");
    scanf("%d",&idade);
    printf("entre com a altura[em metros]: ");
    scanf("%f",&altura);
    arquivo = fopen("info.txt","w");
    fprintf(arquivo,"%s\n%d\t%f\n",nome, idade, altura);
    fclose(arquivo);
}
void resgatar()
{
    FILE * arquivo;
    char nome[N];
    int idade;
    float altura;
    arquivo = fopen("info.txt","r");
    fscanf(arquivo,"%s\n%d\t%f\n",nome,&idade,&altura);
    fclose(arquivo);
    fprintf(stdout,"%s\n%d anos\n%g metros\n",nome, idade, altura);
}

int main()
{
    int opc = menu();
    do{
    if(opc==1)
    {
        informar();
    }
    if(opc==2)
    {
        resgatar();
    }
    opc = menu();
    }while(opc!=3);
    return EXIT_SUCCESS;
}
