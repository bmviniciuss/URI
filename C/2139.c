//2139 - Natal de Pedrinho
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int meses[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
    int dia, mes;
    int tDias = 0 , i;

    while(scanf("%d %d", &mes, &dia) != EOF){
        //add cada mes ao dia indicado
        for(i = 1, tDias = dia; i < mes; i++){
            tDias += meses[i];
        }
        if(tDias == 359) printf("E vespera de natal!\n");
        else if(tDias == 360) printf("E natal!\n");
        else if(tDias > 360) printf("Ja passou!\n");
        else{
            printf("Faltam %d dias para o natal!\n", (360 - tDias));
        }
    }

    return 0;
}
