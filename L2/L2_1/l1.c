#include <stdio.h>

int main(){
  int x,y = 0;

  scanf("%d %d", &x, &y);

  int cont = 0;
  printf("RESP:");

  for(cont = x + 1; cont < y; cont ++){
    if(cont % 2 == 0){
      printf("%d ", cont);
    }
  }

  return 0;
}