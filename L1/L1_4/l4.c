#include <stdio.h>
#include <math.h>

int main(){
  float raio = 0.0;
  float area = 0.0; 
  float metade_raio = 0.0;

  float pi = 3.141592;

  scanf("%f", &raio);

  area = pi * raio * raio;

  metade_raio = sqrt((area/2)/pi);

  printf("%.2f %.2f", area,metade_raio);

  return 0;
}