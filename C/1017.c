#include <stdio.h>

int main(){
    int tempoGasto, veloMedia;
    double litrosGastos;

    scanf("%d%d", &tempoGasto, &veloMedia);

    litrosGastos = ((tempoGasto * veloMedia)/12.0);

    printf("%.3lf\n", litrosGastos);
    return 0;
}
