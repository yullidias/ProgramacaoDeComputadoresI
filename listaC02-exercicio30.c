/* Faça um programa que receba tres numeros e mostre-os em ordem crescente.*/
#include <stdio.h>

int main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if(a > b){
    if(a > c){
      printf("%d", a);
      if(b > c){
        printf(" %d %d\n", b, c);
      }
      else{
        printf(" %d %d\n", c, b);
      }
    }
    else{ 
        printf("%d %d %d\n", c, a, b);
    }
  }
  else if(a > c){
    printf("%d %d %d\n", b, a, c);
  }
  else{
    if(b > c){
      printf("%d %d %d\n", b, c, a);
    }
    else{
      printf("%d %d %d\n", c, b, a);
    }
  }
  return 0;
}
