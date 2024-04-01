#include <stdio.h>

int main(){
  int x = 0;

  scanf("%d", &x);

  if (x > 0 & x < 13){
    if (x == 1){
      printf("Jan.");
    }
    if (x == 2){
      printf("Fev.");
    }
    if (x == 3){
      printf("Mar.");
    }
    if (x == 4){
      printf("Abr.");
    }
    if (x == 5){
      printf("Mai.");
    }
    if (x == 6){
      printf("Jun.");
    }
    if (x == 7){
      printf("Jul.");
    }
    if (x == 8){
      printf("Ago.");
    }
    if (x == 9){
      printf("Set.");
    }
    if (x == 10){
      printf("Out.");
    }
    if (x == 11){
      printf("Nov.");
    }
    if (x == 12){
      printf("Dez.");
    }
  }
  else {
    printf("Invalido.");
  }
  return 0;
}