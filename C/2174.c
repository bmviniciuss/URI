//2174 - Coleção de Pomekon
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 151
#define MAX_LENGHT 1005

int main(){
    int casos, i, j, matriz = -1;
    char nome[MAX_LENGHT], pokedex[MAX][MAX_LENGHT];

    scanf("%d", &casos);
    i = 0;
    while(casos--){
        scanf("%s", &pokedex[i]);
        if(matriz == -1){
            strcpy(pokedex[++matriz],nome);
        }
        else{
            for(i = 0; i <= matriz)
        }

        i++;
    }


    return 0;
}
