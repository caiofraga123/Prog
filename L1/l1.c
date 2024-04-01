#include <math.h>
#include <stdio.h>

int main(){
  int a,b;

  scanf("%d %d", &a, &b);

  float quad = sqrt(a) + sqrt(b);

  printf("%.2f", quad);
  
  return 0;
}