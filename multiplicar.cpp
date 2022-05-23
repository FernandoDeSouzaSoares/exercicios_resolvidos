/*
  Data: 22/04/2018
  Autor: Fernando Soares
  "Algoritimo para multiplicar 2 numeros 
*/
#include <stdio.h>
int main(){
  float num1, num2, mult;
  printf("Digite um numero: "); scanf("%f",&num1);
  printf("Digite outro: "); scanf("%f",&num2);
  mult=num1*num2;
  printf("Resultado de %f x %f he: %f",num1,num2,mult);
  return 0;
}
