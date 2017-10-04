#include<stdio.h>
#include<stdlib.h>
int main()
{
    int vet[]={0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
    unsigned char *pont;
    int nbytes=sizeof(vet);
    int i=0;
    int cont;
    pont=(unsigned char *)vet;
    printf("end. inicial de vetor: %p\n",vet);
    for(cont=0;i<nbytes;i++)
    {
        if(pont[i])
            cont++;
        printf("end.: %p, dado:%d, %X\n",pont+i,pont[i],pont[i]);
    }
    printf("bytes investigados: %d, sendo que %d foram contados",nbytes,cont);
    return EXIT_SUCCESS;
}
