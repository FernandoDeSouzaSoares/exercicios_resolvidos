
/*
  Data: 22/04/2018
  Autor: Fernando Soares
  "Algoritimo para calcular a area de um terreno"
  https://github.com/FernandoDeSouzaSoares/exercicios_resolvidos.git
*/
#include <stdio.h>
int main(){
  float base, alt, area;
  printf("Digite a base em metros: "); scanf("%f",&base);
  printf("Digite a altura em metros: "); scanf("%f",&alt);
  area=base*alt;
  printf("A area he: %f metros quadrados",area);
  return 0;
}
