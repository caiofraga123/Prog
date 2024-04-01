#include <stdio.h>

int main(){
  int n1 = 0;
  int n2 = 0;
  double media = 0.0;

  scanf("%d %d", &n1, &n2);
  media = (n1 + n2)/2.0;

  if (media >= 7.0){
    printf("%.1lf - Aprovado", media);
  }
  else {
    if (media < 5.0){
      printf("%.1lf - Reprovado", media);
    }
    else{
      printf("%.1lf - De Recuperacao", media);
    }
  }
  return 0;
}