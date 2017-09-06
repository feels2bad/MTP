#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int p=0, lim, rod=1, x1, x2, x3, t=0, d;
    for(rod=1;rod<4;rod++)
    {
        printf("\ninsira o limite:");
        scanf("%i",&lim);getchar();
        x1=rand()%7;
        x2=rand()%7;
        x3=rand()%7;
        t=x1+x2+x3;
        if(lim<=11)
        {
            p=p+11-t;
        }
        if(lim>11)
        {
            d=lim-10;
            if(t>lim)
            {
                p=p-(d*(t-lim));
            }
            if(t<=lim)
            {
                p=p+(((lim-t)/d)+1);
            }

        }
    }
    printf("%i",p);
    return 0;
}
