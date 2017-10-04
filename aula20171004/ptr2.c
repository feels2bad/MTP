#include<stdio.h>
#include<stdlib.h>
int main()
{
    int vet[]={0,1,2,4,8,16,1025};
    unsigned char * ponteiro;
    int nbytes = sizeof(vet);
    int i;
    int cont=0;
    printf("end. inicial de vetor: %p\n",vet);
    for(i=0,ponteiro=(unsigned char *)vet;i<nbytes;i++)
    {
        if(!ponteiro[i])
            cont++;
        printf("end.: %p, dado: %d, %X\n",ponteiro+i,ponteiro[i],*(ponteiro+i));
    }
    printf("de %d bytes, %d estao com 0x00.\n",nbytes,cont);
    return EXIT_SUCCESS;
}
