#include<stdio.h>
#include<stdlib.h>
int somatoria(int *ptvetor, int *ptamanho)
{
    if(*ptamanho)
    {
        (*ptamanho)--;
        return *ptvetor+somatoria(ptvetor+1,ptamanho);
    }
    return 0.0;
}
int main()
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    int N = sizeof(A)/sizeof(int);
    printf("a somatoria e: %d",somatoria(A,&N));
    return EXIT_SUCCESS;
}
