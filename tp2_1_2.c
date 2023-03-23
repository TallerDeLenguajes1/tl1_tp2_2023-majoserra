#define N 20
#include<stdio.h>
int main(){
    int i;
    float vt[N], *punt;
    printf("holaa");
    for(i = 0;i<N; i++)
    {
        *punt=1+rand()%100;
        printf("%.2f", *punt);
        punt++;
    }
    return 0;
}