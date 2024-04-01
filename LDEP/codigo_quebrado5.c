#include <stdio.h>

int main(){
  int a, b, i, mdc, mmc, limMDC, limMMC= 0;
  int den = 1;

  scanf("%d %d", &a, &b);


  //Acha limites da busca
  if (a < b){ 
    limMDC = b;
    limMMC = a;
  } else {
    limMDC = a;
    limMMC = b;
  }

  //MDC
  for(den = 1; den <= limMDC; den ++){   
    if(!(a%den) & !(b%den)){ 
      mdc = den;
    }
  }

  //MMC
  i = limMMC;
  while(1){
    if(!(i%a) & !(i%b)){      
      mmc = i;
      break;
    }
    i++;
  }

  printf("%d %d", mdc, mmc);

  return 0;
}
