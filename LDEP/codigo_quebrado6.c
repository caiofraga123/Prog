#include <stdio.h>


int main(){	
	int l = 0;
	int c = 0;
	int i = 0;
	int j = 0;
	int soma = 0; 
	int atual = 0;
	int total = 0;

	scanf("%d %d", &l, &c);

	
	for (i = 0; i<l; i++){
		for(j = 0; j<c; j++){
			scanf("%d", &atual);
			soma += atual;
		}
		total += soma;
		printf("%d\n", soma);
		soma = 0;
	}

	printf("%d\n", total);

	return 0;
}
