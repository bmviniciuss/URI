#include <stdio.h>

int main(){
    int horaInicio, horaFinal, minInicial, minFinal ,horas, minutos;

    scanf("%d %d %d %d", &horaInicio, &minInicial, &horaFinal, &minFinal);

    horas = horaFinal - horaInicio;
    minutos = minFinal - minInicial;

    if(horas <= 0){
        horas += 24;
    }
    if(minutos < 0){
        horas -=1;
        minutos += 60;
    }
    if(horaInicio == horaFinal && minInicial == minFinal){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    }

    return 0;
}
