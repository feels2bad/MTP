#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define N 256
int main()
{
    char str[N];
    int i;
    printf("entre com uma frase: ");
    fgets(str,N,stdin);
    for(i=0;i<N;i++)
    {
        str[i]=toupper(str[i]);
    }
    for(i=0;i<N;i++)
    {
        if(str[i]=='A')
        {
            str[i]='4';
        }
        if(str[i]=='E')
        {
            str[i]='3';
        }
        if(str[i]=='I')
        {
            str[i]='1';
        }
        if(str[i]=='O')
        {
            str[i]='0';
        }
        if(str[i]=='S')
        {
            str[i]='2';
        }
        if(str[i]=='G')
        {
            str[i]='6';
        }

    }
    printf("a frase ficara: ");
    printf("%s",str);
    return EXIT_SUCCESS;
}
