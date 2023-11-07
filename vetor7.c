#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL,"portuguese");
		int vetor [7];
	for (int i=0; i<7; i++){
		printf ("Digite o numero da posicao %d:", i+1);
		scanf ("%d",&vetor [i]);
	}
	for (int i=0; i<7; i++){
		for (int j=i+1; j<7;j++){
			if (vetor[i]>vetor[j]){
					int aux= vetor[i];
					vetor[i]= vetor[i];
					vetor[j]= aux;
			}
		}
	}
	printf("Os numeros ordenados sao :\n");
	for(int i=0; i<7; i++){
		printf("Posicao %d: %d\n", i+1, vetor[i]);
	}
	return 0;
}
