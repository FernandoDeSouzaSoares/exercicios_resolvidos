/*
  Data: 22/04/2018
  Autor: Fernando Soares
  "Algoritimo que troca o valor da variavel" 
*/
#include <stdio.h>
int main(){
    int a, b, a1;
    printf("Digite o valor de A: "); scanf("%d",&a);
    printf("Digite o valor de B: "); scanf("%d",&b);
    printf("\nValor de A: %d e B: %d\n",a,b);
    a1=b; b=a; a=a1;
    printf("\nValor de A: %d e B: %d",a,b);
}
