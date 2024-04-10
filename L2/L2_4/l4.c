#include <stdio.h>

int main(){

    int verdade = 1;
    int numero = 0;
    float cont = 0;
    int soma = 0;
    float media = 0;
    int maior = 0;

    while(verdade){
        scanf("%d", &numero);
        if (numero == 0){
            verdade = 0;
        }
        
        if (verdade == 0){
            break;
        }
        
        if (numero >= maior){
            maior = numero;
        }
        
        cont += 1;
        soma += numero;
        media = soma/cont;
        printf("%d %.6f\n", maior, media);
    }
    
    return 0;
}