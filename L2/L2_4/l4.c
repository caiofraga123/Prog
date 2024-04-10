    #include <stdio.h>

    int main(){
        int verdade = 1;
        int numero = 0;
        int cont = 0;
        int soma = 0;
        float media = 0;

        while(verdade){
            scanf("%d ", &numero);
            if (numero == 0){
                verdade = 0;
            }
            cont += 1;
            soma += numero;
            media = soma/cont;
            printf("%d  %6.f ", numero, media);
        }


        return 0;
    }