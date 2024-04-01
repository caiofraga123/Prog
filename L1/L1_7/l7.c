#include <stdio.h>

int main(){
  float x = 0;
  char t = "";

  scanf("%f %c", &x, &t);

  if(t == 'c'){
    printf("%.2f (F)",(x * 9/5) + 32);
  }
  if(t == 'C'){
    printf("%.2f (F)", (x * 9/5 )+ 32);
  }
  if(t == 'f'){
    printf("%.2f (C)",(x - 32) * 5/9);
  }
  if(t == 'F'){
    printf("%.2f (C)", (x - 32) * 5/9);
  }
  return 0;
}