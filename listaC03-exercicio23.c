/*Faca um algoritmo que leia um numero positivo e imprima seus divisores. */
#define MAXTAM 10000

#include <stdio.h>

int main(){
  int overflow = 0;
  int v[MAXTAM], n, i, ultimoDivisor;
  int topo = 0;
  scanf("%d", &n);
  printf("{1"); // todo numero e divisivel por 1
  ultimoDivisor = 1;
  v[topo] = n; // todo numero e divisivel por si mesmo
  topo++;

  for(i = 2; i < v[topo-1] && !overflow; i++){
    if(n % i == 0){
      printf(", %d", i);
      ultimoDivisor = i;
      v[topo] = n/i;
      if(topo < MAXTAM){
        topo++;
      }
      else{
        printf("Não foi possivel exibir todos os divisores");
        overflow = 1;
      }
    }
  }
  if(!overflow){
    while(topo > 0){
      if(v[topo - 1] != ultimoDivisor){
        printf(", %d", v[topo - 1], topo);
      }
      topo--;
    }
  }
  printf("}\n");
  return 0;
}
