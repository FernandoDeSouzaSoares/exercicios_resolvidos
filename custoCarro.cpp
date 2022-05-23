/*
  Data: 22/04/2018
  Autor: Fernando Soares
  "Algoritimo para calcular o custo de um carro ao consumido levando
  concideração algumas taxas aplicadas."
*/
#include <stdio.h>
int main(){
  float custfab, custtotal;
  printf("Digite o custo de fabrica: "); scanf("%f",&custfab);
  custtotal=custfab+(custfab*0.32)+(custfab*0.41);
  printf("O custo ao consumidor é %f",custtotal);
  return 0;
}
