/*
  Data: 22/04/2018
  Autor: Fernando Soares
  "Algoritimo que mostra a idade total em dias."
  Algoritimo que mostra a idade total em dias.
*/
#include<stdio.h>
int main(){
  int dia, mes, ano, idade;
  printf("Digite a quantidade de anos: "); scanf("%d",&ano);
  printf("Digite a quantidade de meses: "); scanf("%d",&mes);
  printf("Digite a quantidade de dias: "); scanf("%d",&dia);
  idade=dia+(mes*30)+(ano*365);
  printf("a idade em dias he: %d ",idade);
  return 0;
}
