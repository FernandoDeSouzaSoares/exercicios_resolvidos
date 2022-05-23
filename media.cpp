/*
  Data: 22/04/2018
  Autor: Fernando Soares
  Algoritimo para calcular a media entre 4 numeros.
*/
#include <stdio.h>
int main(){
  float T;
  int a, b, c, d, r, s;
  printf("Digite um numero: "); scanf("%d",&a);
  printf("Digite um numero: "); scanf("%d",&b);
  printf("Digite um numero: "); scanf("%d",&c);
  printf("Digite um numero: "); scanf("%d",&d);
  r=a+b; s=c*d; T=(r+s)/2;
  printf("%d e %d \n valor total: %f ",r,s,T);
  return 0;
}
