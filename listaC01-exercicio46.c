/*  Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999).
Gere outro número formado pelos dígitos invertidos do número lido. */

#include <stdio.h>

int main(){
  int tam = 4;
  char numero[tam];
  scanf("%s", numero);
  printf("Numero lido: %s\n", numero);
  printf("Numero invertido: ");
  int i;
  for(i= tam-1; i>=0 ; i--){
    printf("%c", numero[i]);
  }
  printf("\n");
  return 0;
}
