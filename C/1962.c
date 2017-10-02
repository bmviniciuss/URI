//1962 - Há Muito, Muito Tempo Atrás
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ATUAL 2016

int main(){
    int ano, tempo, casos;

    scanf("%d", &casos);

    while(casos--){
        scanf("%d", &ano);
        tempo = ano - ATUAL;

        if(tempo < 0){ //D.C.
            printf("%d D.C.\n", abs(tempo));
        }
        else{ //A.C
            printf("%d A.C.\n", tempo);
        }
    }


    return 0;
}
