#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, *v, *a, i;
  v = (int*) malloc (5*sizeof(int));
  for(i=0; i<5; i++){
    scanf("%d", &n);
    a = v+i;
    *a = n;
  }
  for(i=0; i<5; i++){
    printf("%d\n", *(v+i));
  }
  free(v);
}
