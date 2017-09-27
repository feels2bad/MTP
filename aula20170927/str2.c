#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define N 256
int main()
{
    char str[N];
    int contV=0, contC=0, contD=0, contE=0, i;
    printf("insira a frase:");
    fgets(str,N,stdin);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            {
                contV++;
            }
            else
            {
                contC++;
            }
        }
        else
        {
            if(str[i]>='0'&&str[i]<='9')
            {
                contD++;
            }
            if(str[i]==' ')
            {
                contE++;
            }
        }
    }
    printf("\n a frase tem: %d vogais, %d consoantes, %d digitos, %d espacos",contV,contC,contD,contE);
    return EXIT_SUCCESS;
}
