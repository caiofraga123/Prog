#include <stdio.h>

int main(){
  char m = "";

  scanf(" %c", &m);

  if (m >= 'a' & m <= 'z'){
    m = m - 32;
    printf("%c(%d)", m, m);
  }
  else {
    if (m >= 'A' & m <= 'Z'){
      printf("A letra deve ser minuscula!");
    }
    else{
      printf("Nao e letra!");
    }
  }

  return 0;
}