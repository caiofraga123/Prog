#include <stdio.h>

int main(){
    int n = 0;
    float pi = 0;
    float k = 1;
    int verdade = 1;
    float soma = 0;
    
    scanf("%d", &n);
    
    while (verdade){
        soma = soma + 6/(k*k);
        
        if(k == n){
            break;
        }
        
        k += 1;
    }
    
    pi = sqrt(soma);
    
    printf("%.6f", pi);
    
    return 0;
}