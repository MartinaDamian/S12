#include<stdio.h>
struct direccion{
    char calle[40];
    int num_casa;
    char ciudad[40];
    char parroquia[20];
};
typedef struct direccion dir;///define for user time
struct usuario{
char nombre[40];
char apellido[40];
char CI[10];
struct direccion dir;//Estructura dentro de estructura
char fono[15];
};
typedef struct usuario user;

int main(){
    
  int i=0, ans=0;
  char cab[100]={"=========================FACTURA MODELO================================\n"};
  struct usuario user[2];
      printf("Nombre:\t");
      scanf("%s %s",user[i].nombre, user[i].apellido);
      printf("Telefono:\t");
      scanf("%s",user[i].fono);
      printf("CI:\t");
      scanf("%s",user[i].CI);
      printf("DIRECCION\n Calle:\t");
      scanf("%s", user[i].dir.calle);
      printf("Numero de domicilio:\t");
      scanf("%d", &user[i].dir.num_casa);
      printf("Ciudad:\t");
      scanf("%s", user[i].dir.ciudad);
      printf("Parroquia:\t");
      scanf("%s", user[i].dir.ciudad);

  printf("%s", cab);
  printf("Nombre:\t%s %s\t\t\tTelefono: %s\n",user[i].nombre, user[i].apellido, user[i].fono);
  printf("CI:\t%s\n",user[i].CI);
  printf("Direccion:\n Calle:\t%s\t\t\tNumero de domicilio: %d\n",user[i].dir.calle, user[i].dir.num_casa);
  printf("Ciudad:\t%s\t\t\tParroquia: %s\n",user[i].dir.ciudad, user[i].dir.parroquia);


  
  

  

}