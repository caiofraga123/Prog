#include <stdio.h>

int main(){
  double a;

  scanf("%lf", &a);

  int inteiro = a/1;
  double decimal = a - inteiro;

  printf("INTEIRO:%d,REAL:%.2f", inteiro, decimal);

  return 0;
}