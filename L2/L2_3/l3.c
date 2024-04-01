#include <stdio.h>

int main(){
  int x = 0;
  int contg = 0;
  int y = 0;
  int maior = 0;
  int menor = 0;
  int par = 0;
  int impar = 0;
  float media = 0.0;

  scanf("%d ", &x);

  for (contg = 0; contg < x; contg++){
    
    scanf("%d ", &y);

    media = media + y;

    if (contg == 0 | y >= maior){
      maior = y;
    }
    if (contg == 0 | y <= menor){
      menor = y;
    } 

    if (y % 2 == 0){
      par = par + 1;
    }
    else {
      impar = impar + 1;
    }
  }

  printf("%d %d %d %d %.6f", maior, menor, par, impar, media/x);
  
  return 0;
}