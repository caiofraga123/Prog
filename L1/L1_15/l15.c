#include <stdio.h>

int main(){
  int n = 0;
  int o = 0;

  scanf("%d %d", &n, &o);

  if (o == 1){
    if (n%2 == 0){
      printf("PAR");
    } else {
      printf("IMPAR");
    }
  }
  if (o == 2){
    if ((n/10)%2 == 0){
      printf("PAR");
    } else {
      printf("IMPAR");
    }
  }
  if (o == 3){
    if ((n/100)%2 == 0){
      printf("PAR");
    } else {
      printf("IMPAR");
    }
  }

  return 0;
  
}