#include<stdio.h>
#include<stdlib.h>

int main(){
  int linhaA, colunaA, linhaB, colunaB, i, j;
  int **A, **B, **P;
  scanf("%d %d %d %d", &linhaA, &colunaA, &linhaB, &colunaB);
  //aloca matriz A
  A = (int**) malloc (linhaA * sizeof(int*));
  for(i = 0; i < linhaA; i++){
    A[i] = (int*) malloc (colunaA * sizeof(int));
  }
  //aloca matriz B
  B = (int**) malloc (linhaB * sizeof(int*));
  for(i = 0; i < linhaB; i++){
    B[i] = (int*) malloc (colunaB * sizeof(int));
  }
  printf("\nMatriz A\n");
  for(i = 0; i < linhaA; i++){
    for(j = 0; j< colunaA; j++){
      scanf("%d", &A[i][j]);
    }
  }
  printf("\nMatriz B\n");
  for(i = 0; i < linhaB; i++){
    for(j = 0; j< colunaB; j++){
      scanf("%d", &B[i][j]);
    }
  }
  P = (int**) malloc (linhaA * sizeof(int*));
  for(i = 0; i < linhaA; i++){
    P[i] = (int*) malloc (colunaB * sizeof(int));
  }
  for( i=0; i< linhaA; i++){
    for( j=0; j< colunaB; j++){
      P[i][j] = 0;
    }
  }
  if(colunaA == linhaB){
      int k, linha, coluna;
      for(linha = 0; linha < linhaA; linha++){
        for(coluna = 0; coluna < colunaB; coluna++){
          int soma = 0;
          for(k = 0; k < colunaA; k++){
            soma += A[linha][k] * B[k][coluna];
          }
          P[linha][coluna] = soma;
          soma = 0;
        }
      }
      printf("\nProduto:\n" );
      for(i = 0; i < linhaA; i++){
        for(j = 0; j< colunaB; j++){
          printf("%d ", P[i][j]);
        }
        printf("\n");
      }
  }
  return 0;
}
