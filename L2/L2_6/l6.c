#include <stdio.h>

int main(){

    int n = 0;
    float soma = 0;
    float numerador1 = 1;
    float numerador2 = 2;
    float denominador1 = 1;
    float denominador2 = 50;
    float expoente = 1;
    
    scanf("%d", &n);
    
    if (n == 1){
        for (int i = 0; i < 49; i ++){
            soma = soma + (numerador1/denominador1);
            numerador1 += 2;
            denominador1 += 1;
        }
        soma = soma + (numerador1/denominador1);
        printf("%.6f\n", soma);
    }
    
    if (n == 2){
        for (int i = 50; i > 1; i --){
            soma = soma + (numerador2 * (numerador2 * expoente)/denominador2);
            expoente++;
            denominador2--;
        }
    }

    return 0;
}