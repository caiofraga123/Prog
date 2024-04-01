#include <stdio.h>

int main(){
  int x,y = 0;

  scanf("%d %d", &x, &y);

  int cont = 0;
  for(cont = x +1; cont < y; cont ++){
    if(cont%3 == 0 | cont%4 == 0 | cont%7 == 0){
      printf("%d ", cont);
    }
  }
  
  return 0;
}