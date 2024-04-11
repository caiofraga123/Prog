#include <stdio.h>
#include <math.h>

int main(){

    int n = 0;
    double soma = 0;
    double numerador1 = 1;
    double numerador2 = 2;
    double denominador1 = 1;
    double denominador2 = 50;
    double expoente = 1;
    double potencia = 1;
    
    scanf("%d", &n);
    
    if (n == 1){
        for (int i = 0; i < 49; i ++){
            soma = soma + (numerador1/denominador1);
            numerador1 += 2;
            denominador1 += 1;
        }
        soma = soma + (numerador1/denominador1);
        printf("%.6lf", soma);
    }
    
    if (n == 2){
        for (int i = 50; i > 2; i --){
            soma = soma + (numerador2/denominador2);
            expoente++;
            denominador2--;
            numerador2 = pow(2, expoente);
        }
        printf("%.6lf", soma);
    }

    if (n == 3){
        for (int i = 0; i < 9; i++){
            soma = soma + (numerador1/potencia);
            numerador1++;
            denominador1++;
            potencia = pow(denominador1, 2);
        }
        soma = soma + (numerador1/potencia);
        printf("%.6lf", soma);
    }


    return 0;
}