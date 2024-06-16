/*cuando yo quiero agrupar varios tipos de datos, se cre una estrucutura que posee varios tipos de datos.
me sirve para cuando yo quiera grupar.
vector solo acepta un solo tipo de dato.
Laestructura acepta varios tipos de datos 
1. Dentro del main
  estructura local
   Fuera del main
  estructura global
2. Antes del include
  dps del include
    no afecta en nada
estructura funciona mejor cuando trabja con heathers

Pudo llamarle de varias formas 

*/

#include<stdio.h>
struct automovil{
  char marca[100];
  char modelo[100];
  char color[100];
  int anio_modelo;
  int km;
};

//estructura 308 bytes
//esta estructura se llamara auto, se le llamara auto.()

int main()
{
    //Es mejor que cuando se declara una estructura de datos es declarar junto a la cantidad de datos que posee
    //En este caso auto1 porque tiene un solo valor
    //Si se declara otro valor en ese auto1 se elimina el original
    //Se sugiere que al final de las variable que se coloque un numero
    struct automovil *prt; //cuando yo declaro un puntero debe ser del mismo tipo de dato en este caso
    //automovil es estructura
  struct automovil auto1={"Audi", "TT", "Azul", 2023};

printf("El mejor auto es:%s y el modelo es:%s el color es:%s el año del modelo es: %d\n", auto1.marca, auto1.modelo, auto1.color, auto1.anio_modelo);
printf("El mejor auto es:%s y el modelo es:%s el color es:%s el año del modelo es: %d\n", prt->marca, prt->modelo, prt->color, prt->anio_modelo);
//Apunta la direccion de memoria que contenga ese valo
//sizeof(auto)); //sizeof es como len de pytthon

return 0;
}