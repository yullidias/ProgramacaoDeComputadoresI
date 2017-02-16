/*Calcule as raızes da equacao de 2o grau. */
#include <stdio.h>
#include <math.h>

int main(){
  double a, b, c, x1, x2, delta;
  scanf("%lf %lf %lf", &a, &b, &c);
  delta = b*b - 4*a*c;
  if(delta < 0){
    printf("Nao existe raiz\n");
  }
  else if(delta == 0){
    x1 = (-b + sqrt(delta))/2*a;
    printf("%lf\nRaiz unica\n");
  }
  else{
    x1 = (-b + sqrt(delta))/2*a;
    x2 = (-b - sqrt(delta))/2*a;
    printf("%lf\n%lf\n", x1, x2);
  }
  return 0;
}
