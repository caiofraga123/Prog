#include <stdio.h>

int main(){
  int pessoas = 0;
  int itens = 0;

  scanf("%d %d", &pessoas, & itens);

  if (itens == pessoas){
    printf("RESP:%d", pessoas);
  }
  if (itens < pessoas){
    printf("RESP:%d", itens);
  }
  if (itens > pessoas){
    if (itens%pessoas == 0){
      printf("RESP:%d", pessoas);
    }
    else{
      printf("RESP:%d", itens%pessoas);
    }
  }
  return 0;
}