#include <stdio.h>

int main(){
  double altura, largura;

  scanf("%lf %lf", &altura, &largura);

  double perimetro = altura*2 + largura*2;

  printf ("%.2lf", perimetro);

  return 0;
}