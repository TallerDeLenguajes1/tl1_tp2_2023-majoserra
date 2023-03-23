
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#define N 20

int main(){
    int i;
    float vt[N];
    printf("holaa");
    for(i = 0;i<N; i++)
    {
        vt[i]=1+rand()%100;
        printf("%.2f", vt[i]);
    }
    return 0;
}