//2003 - Domingo de Manhã
#include <stdio.h>
#include <stdlib.h>

int main(){
    int hora, min, max = 60, tHora, tMin, dif, minEncontro = 480;

    while(scanf("%d:%d", &hora, &min) != EOF){
        tHora = hora * 60;
        tMin = min + tHora + max;
        dif = tMin - minEncontro;
        if(dif > 0){
            printf("Atraso maximo: %d\n", dif);
        }
        else{
            dif = 0;
            printf("Atraso maximo: %d\n", dif);
        }
    }


    return 0;
}
