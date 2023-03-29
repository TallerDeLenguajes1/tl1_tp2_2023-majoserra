#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct compu {
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
};

void cargarCompu(struct compu PC[5], char tipos[6][10]);
void mostrarCompu(struct compu PC[5]);
void masVieja(struct compu PC[5]);
void mayorVelocidad(struct compu PC[5]);

int main(){
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    struct compu PC[5]; // definimos un arreglo del tipo estructura para guardar las caracterisiticas de 5 compus

    cargarCompu(PC, tipos);
    mostrarCompu(PC);
    masVieja(PC);
    mayorVelocidad(PC);
    return 0;
}
//c) Escribe una función que presente la lista de las PC, cada una con sus características
void cargarCompu(struct compu PC[5], char tipos[6][10]){
    for (int i = 0; i < 5; i++)
    {
        PC[i].velocidad = 1+rand()%3;
        PC[i].anio = 2015+rand()%9;
        PC[i].cantidad = 1+rand()%9;
        PC[i].tipo_cpu = tipos[rand() % 6];
    }
    
} 
void mostrarCompu(struct compu PC[5]){
    for (int i = 0; i < 5; i++)
    {
        printf("\nVelocidad: %d", PC[i].velocidad);
        printf("\nAño: %d",PC[i].anio );
        printf("\nCantidad: %d",PC[i].cantidad);
        printf("\nTipo_cpu: %s",PC[i].tipo_cpu );
        printf("\n----------------------\n\n");
    }
    
}

//d) Escribe una función que presente la PC más vieja.
void masVieja(struct compu PC[5]){
    int menor = 2300, j;
    for (int i = 0; i < 5; i++)
    {
        if (PC[i].anio<menor)
        {
            menor = PC[i].anio;
            j = i;
        }  
    }
    printf("\nLa PC mas vieja es:");
    printf("\nVelocidad: %d", PC[j].velocidad);
    printf("\nAño: %d",PC[j].anio );
    printf("\nCantidad: %d",PC[j].cantidad);
    printf("\nTipo_cpu: %s",PC[j].tipo_cpu );
    printf("\n----------------------\n\n");
    
}
//e) Escribe una función que presente la PC que tiene mayor velocidad.
void mayorVelocidad(struct compu PC[5]){
    int mayor = 0, j;
    for (int i = 0; i < 5; i++)
    {
        if (PC[i].velocidad>mayor)
        {
            mayor = PC[i].velocidad;
            j = i;
        }  
    }
    printf("\nLa PC que tiene mayor velocidad:");
    printf("\nVelocidad: %d", PC[j].velocidad);
    printf("\nAño: %d",PC[j].anio );
    printf("\nCantidad: %d",PC[j].cantidad);
    printf("\nTipo_cpu: %s",PC[j].tipo_cpu );
    printf("\n----------------------\n\n");
}
