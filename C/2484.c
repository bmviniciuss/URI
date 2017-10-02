//2484 - Abracadabra
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char texto[105];
    int i, espacos, letras, len, j, cont, e, lenEs, controle;

    while(scanf("%s", texto) != EOF){
        espacos = 0;
        letras = 0;
        len = strlen(texto);
        controle = strlen(texto);
        lenEs = 0;
        cont = 0;
        e = 0;

        for(j = 0; j < len; j++){//LINHA
            letras = 0;
            for(e = 0; e < lenEs; e++){
                printf("%c", ' ');
            }

            for(i = 0; i < strlen(texto) - cont; i++){ //COLUNAS
                letras++;
                if(letras == controle){
                    printf("%c", texto[i]);
                }
                else{
                    printf("%c ", texto[i]);
                }

            }//for COLUNAS
            printf("\n");
            lenEs++;
            cont++;
            controle--;

        }//for LINHA
        printf("\n");
    }


    return 0;
}
