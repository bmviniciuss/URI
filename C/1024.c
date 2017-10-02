//1024 - Criptografia
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int casos, i, j, k;
	char texto[1001], textoCopy[1001], letra;

	scanf("%d", &casos);

	for(i = 0; i < casos; i++){
		//ler casos
		getchar();
		scanf("%[^\n]s", texto);

		//primeira passagem - desloca para direita em 3 un
		for(j = 0; j < strlen(texto); j++){
			letra = texto[j];
			if((letra >= 'A' && letra <= 'Z')||(letra >= 'a' && letra <= 'z')){
				texto[j] += 3;
			}
		}

		//segunda passagem - inverte string;
		j = strlen(texto) - 1;
		for(k = 0; k < strlen(texto); k++){
			textoCopy[k] = texto[j];
			j--;
		}

		j = strlen(texto)/2;
		// printf("J: %d\n", j);
		//terceira passagem - metade dps diminui em uma unidade
		for(k = j ; k < strlen(texto); k++){
			textoCopy[k] -= 1;
		}

		for(k = 0; k < strlen(texto); k++){
			printf("%c", textoCopy[k]);
		}
		printf("\n");
	}

//OLATUDOB

}
