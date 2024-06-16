#include<stdio.h>
struct direccion{
    char calle[40];
    int num_casa;
    char ciudad[40];
    char parroquia[20]
};
struct usuario{
char nombre[40];
char apellido[40];
struct direccion dir;//Estructura dentro de estructura
char fono[15]
};

int main(){
    struct usuario pablo={//Como se tiene una estructura dentro de una estructura, 
    //es decir se desgina un vector dentro de un vector 
        "Pablo",
        "Piccaso",
        {"Calle_P", 6969, "UIO", "lalaland"},
        "0968740839"
    };
    
    printf("Usuario: %s %s\n", pablo.nombre, pablo.apellido);
    printf("Direccion: %s %d\n", pablo.dir.calle, pablo.dir.num_casa);
}