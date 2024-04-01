#include <stdio.h>

int main(){
  int x = 0;
  int y = 0;
  
  scanf("%d %d", &x, &y);
  if (x>y){
    printf("N1 = %d", x);
  }
  if (x<y){
    printf ("N2 = %d", y);
  }
  if (x==y) {
    printf ("N1 = N2");
  }
  return 0;
}