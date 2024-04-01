#include <stdio.h>

int main(){
  double x1,y1, x2, y2;

  scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

  double altura = y2 - y1;

  double largura = x2 - x1;

  double perimetro = altura*2 + largura*2;

  printf("%.2lf", perimetro);

  return 0;
}