#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void func1(double *ptA,double *ptB,int *ptn)
{
    if(*ptn)
    {
        (*ptn--);
        *ptA=sqrt(*ptA+*ptB);
        func1(ptA+1,ptB+1,ptn);
    }
}
void func2(double *ptA,double *ptB,int *ptn)
{
     if(*ptn)
    {
        (*ptn--);
        *ptA=*ptA+3*(*ptB);
        func2(ptA+1,ptB+1,ptn);
    }
}
void func3(double *ptA,double *ptB,int *ptn)
{
     if(*ptn)
    {
        (*ptn--);
        *ptA=(*ptB**ptB)/(*ptA);
        func3(ptA+1,ptB+1,ptn);
    }
}
int main()
{
    double A[] = {1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0, 15.0, 17.0, 19.0, 21.0, 23.0, 25.0, 27.0, 29.0, 31.0};
    double B[] = {0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625};
    int n = sizeof(A)/sizeof(double);
    int escolher, i;
    printf("escolha a funcao 1,2 ou 3");
    scanf("%d",&escolher);
    if(escolher==1)
    {
        func1(A,B,&n);
        for(i=0;i<sizeof(A);i++)
        {
            printf("%d",A[i]);
        }
    }
    if(escolher==2)
    {
        func2(A,B,&n);
        for(i=0;i<sizeof(A);i++)
        {
            printf("%d",A[i]);
        }
    }
    if(escolher==3)
    {
        func3(A,B,&n);
        for(i=0;i<sizeof(A);i++)
        {
            printf("%d",A[i]);
        }
    }
    return EXIT_SUCCESS;
}
