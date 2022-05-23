/*
  Data: 22/04/2018
  Autor: Fernando Soares
  "Algoritimo para converter o Dolar em Reais" 
*/
#include <stdio.h>
int main(){
  float valdolar, valreal, convert;
  printf("Digite o valor do Dolar: "); scanf("%f",&valdolar);
  printf("Digite o valor do Real: "); scanf("%f",&valreal);
  convert=valreal/valdolar;
  printf("Valor em reais e: %f",convert);
  return 0;
}
