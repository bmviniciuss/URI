#include <stdio.h>

int main(){
    int inicio, final, tempo;

    scanf("%d %d", &inicio, &final);

    tempo = final - inicio;

    if(tempo <= 0){
        tempo += 24;
    }
    if(inicio == final){
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }
    else{
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }

    return 0;
}
