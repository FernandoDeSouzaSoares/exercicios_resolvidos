/*
  Data: 22/04/2018
  Autor: Fernando Soares
  "Algoritimo para converter graus Cecius em Fahrenheit"
*/
#include <stdio.h>
int main(){
  float C, F;
  printf("Digite a temperatura em C: "); scanf("%f",&C);
  F=1.8*C+32;
  printf("%f F",F);
  return 0;
}
