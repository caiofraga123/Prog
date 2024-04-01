#include <stdio.h>

int main(){
  int i, qtd, cont = 0;
  int den = 1;

  scanf("%d", &qtd);

  for(i = 2; i <= qtd; i++){
    while(den <= i){
      if(i % den == 0){
        cont = cont + 1;
      }
      den = den + 1;
    }
    if(cont==2){
      printf("%d ", i);
    }
    den = 1;
    cont = 0;
  }

  return 0;
}