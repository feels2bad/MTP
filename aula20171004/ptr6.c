#include<stdio.h>
#include<stdlib.h>
#define N 16
int main()
{
    char str[N];
    int *pont=(int *)str;
    int i;
    for(i=0;i<N;i++)
        str[i]='\0';
    printf("entre com o texto(%d caracteres max.)\n",N-1);
    fgets(str,N,stdin);
    for(i=0;i<N/sizeof(int);i++)
    {
        printf("end.:%p => dado: %d(dec), %X(hex)\n",pont+i,pont[i],pont[i]);
    }
    return EXIT_SUCCESS;
}
