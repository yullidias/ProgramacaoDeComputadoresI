/*Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela,
a soma de todos os seus algarismos.
Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1).Se o número lido não for
maior do que zero, o programa terminará com a mensagem número inválido".*/

#include <stdio.h>

int main(){
  int numero, soma;
  while(scanf("%d", &numero), numero >= 0){
    soma = 0;
    while(numero){
      soma += (numero % 10);
      numero /= 10;
    }
    printf("soma: %d\n", soma);
  }
  printf("Numero invalido\n");
  return 0;
}
