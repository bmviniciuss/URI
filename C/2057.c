//2057 - Fuso Horário
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int horaSaida, tempo, fuso, horaFinal;

    scanf("%d %d %d", &horaSaida, &tempo, &fuso);

    horaFinal = horaSaida + tempo + fuso;
    if(horaFinal >= 24){
        printf("%d\n", (horaFinal % 24));
    }
    else if(horaFinal < 0){
        printf("%d\n", (24 + horaFinal));
    }
    else{
        printf("%d\n", horaFinal);
    }


    return 0;
}
