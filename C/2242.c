//2242 - Huaauhahhuahau
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hasVogal(char* texto);
void reverseStr(char* texto, char* reverse);
void onlyVogals(char* texto, char* textoCopy);

int main(){
    char risada[55], copyRisada[55];
    char risadaVogals[55],copyRisadaVogals[55];

    scanf("%s", risada);


    // printf("TEXT: %s\n", risada);
    // printf("VOGA: %s\n", risadaVogals);

    if(hasVogal(risada)){
        //compara inverso das vogais da risada

        reverseStr(risada, copyRisada);
        onlyVogals(risada, risadaVogals);
        onlyVogals(copyRisada, copyRisadaVogals);

        if(!(strcmp(risadaVogals, copyRisadaVogals))){
            printf("S\n");
        }
        else{
            printf("N\n");
        }

    }
    else{
        printf("N\n");
    }

    return 0;
}

int hasVogal(char* texto){
    int i, c;
    char letra;
    for(i = 0; i < strlen(texto); i++){
        letra = texto[i];
        if(letra == 'a' || letra == 'e' ||letra == 'i' ||letra == 'o' ||letra == 'u' ){
            c = 1;
            break;
        }
        else{
            c = 0;
        }

    }
    return c;
}


void reverseStr(char* texto, char* reverse){
    int i, j = strlen(texto) - 1, len;
    for(i = 0; i < strlen(texto); i++){
        reverse[i] = texto[j];
        j--;
    }
    len = strlen(texto);
    reverse[len] = '\0';
}

void onlyVogals(char* texto, char* textoCopy){
    int i, cont = 0;
    char letra;

    for(i = 0; i < strlen(texto); i++){
        letra = texto[i];

        if(letra == 'a' || letra == 'e' ||letra == 'i' ||letra == 'o' ||letra == 'u'){
            textoCopy[cont] = letra;
            cont++;
        }
    }
    textoCopy[cont] = '\0';
}
