#include <stdio.h>
#include <stdlib.h>
/*PERSISTENCIA: NIVEL DE BASE MAS ALTO
r read abre el fichero de lectura
w (write) abre un fichero para escritura, se sobre escribe
a append añadir informacion de un fichero
+ simbolo para abrir un fichero en modo lectura y escritura (al mismo tiempo)
b crear archivos binarios (si se utiliza codigos binarios )
t abrir archivos texto
*/
/*Se trabja con archivos con punteros  porque es con direccionesd de memoria
1. Cuando voy a abrir un archivo se abra FILE y una varuable tipo puntero

*/
int main() {
  FILE * prt;//1 declaro
  char archivo[]="datos.txt";
  //en la apertura del achivo es la clave
  //2. Abren 
  prt=fopen(archivo, "r");//lee el archivo
  //3. Validar
  if(prt==NULL){
    printf("Error al abrir el archivo!! %s\n", archivo);
    return 1;
  }
  fclose(prt);
  return 0;
  
}