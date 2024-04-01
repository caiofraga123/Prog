#include <stdio.h>

int main(){
  int x1 = 0;
  int y1 = 0;
  int x2 = 0;
  int y2 = 0;
  int p1 = 0;
  int p2 = 0;

  scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &p1, &p2);

  if ((p1 >= x1 & p1 <= x2) | (p1 >= x2 && p1 <= x1)) {
    if ((p2 >= y1 & p2 <= y2) | (p2 >= y2 && p2 <= y1)){
      printf("Dentro");
    }
  }else{
    printf("Fora");
  } 
  
  return 0;
}