/*Ler um numero inteiro.
Se o numero lido for negativo, escreva a mensagem “Numero invalido”.
Se o numero for positivo, calcular o logaritmo deste numero.*/

#include <stdio.h>

int main(){
  int numero;
  double n;
  scanf("%d", &numero);
  if(numero < 0){
    printf("Numero invalido\n");
  }
  else{
    printf("%lf\n", log((double)numero));
  }
  return 0;
}
