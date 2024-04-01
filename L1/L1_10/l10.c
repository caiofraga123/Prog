#include<stdio.h>

int main(){
  int x = 0;

  scanf("%d", &x);

  if (x%2 == 0){
    printf("Par");
  }
  else{
    printf("Impar");
  }

  return 0;
}