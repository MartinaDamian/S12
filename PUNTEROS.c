#include <stdio.h>

int main1() {
  int x, y, z;
  int *a[3];
  a[0] = &x;
  a[1] = &y;
  a[2] = &z;

  *a[0] = 1;
  *a[1] = 10;
  *a[2] = 2;

  printf("x:%d\n", &x);
  printf("y:%d\n", &y);
  printf("z:%d\n", &z);//los datos no persisten - los datos basados en la memoria no son persistentes pero son velocez debido a que no se basand en disco
  //por eso las computadoras se basan en discos solicods SD no en discos rigidos HD 
  /*
  
  
  
  
  
  
  
  
  
  
  */
}