#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define N 256
int main()
{
    char str[N];
    int i;
    printf("insira a frase: ");
    fgets(str,N,stdin);
    for(i=0;i<N;i++)
    {
        if(str[i]>='a'&&str[i]<='m'||str[i]>='A'&&str[i]<='M')
        {
            str[i]=str[i]+13;
        }
        else
        {
            if(str[i]>='n'&&str[i]<='z'||str[i]>='N'&&str[i]<='Z')
            {
                str[i]=str[i]-13;
            }
        }
    }
    printf("a frase criptografada sera: ");
    printf("%s",str);
    return EXIT_SUCCESS;
}
