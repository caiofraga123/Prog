#include <stdio.h>

int main(){
  int x = 0;
  int y = 0;
  int z = 0;

  scanf("%d %d %d", &x, &y, &z);

  if (x < y & x < z){
    if (y < z){
      printf("N1 = %d, N2 = %d, N3 = %d", x, y, z);
    }
    else {
      printf("N1 = %d, N3 = %d, N2 = %d", x, z, y);
    }
  }
  if (y < x & y < z){
    if (x < z){
      printf("N2 = %d, N1 = %d, N3 = %d", y, x, z);
    }
    else {
      printf("N2 = %d, N3 = %d, N1 = %d", y, z, x);
    }
  }
  if (z < x & z < y){
    if (x < y){
      printf("N3 = %d, N1 = %d, N2 = %d", z, x, y);
    }
    else {
      printf("N3 = %d, N2 = %d, N1 = %d", z, y, x);
    }
  }

  return 0;
}