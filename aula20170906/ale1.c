#include<stdio.h> //printf
#include<stdlib.h> //rand
#include<time.h> //time
int main()
{
    srand(time(0));
    printf("entre 0 e 99: %d\n", rand()%100);
    printf("entre 101 e 293: %d\n",101+rand()%(293-101+1));
    return 0;
}
