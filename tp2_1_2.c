// codigo a completar
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 20

int main(){
    int i;
    double vt[N], *punt=vt;

    for(i = 0;i<N; i++)
    {
        *punt=1+rand()%100;
        printf("\nvt[%d] = %.2f", i, *punt);
        punt++;
    }

    return 0;
}