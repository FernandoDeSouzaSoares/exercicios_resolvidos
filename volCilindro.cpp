/*
  Data: 22/04/2018
  Autor: Fernando Soares
  "Algoritimo que calcula o volume do cilindro" 
*/
#include <stdio.h>
main(){
  float vol, r, h;
  printf("Digite a medida do Raio: "); scanf("%f",&r);
  printf("\nDigite a medida a altura: "); scanf("%f",&h);
  vol=3.14*(r*r)*h;
  printf("\nO volume do cilindro he: %.2f",vol);
  return 0;
}
