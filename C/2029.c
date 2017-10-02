//2029 - Reservatório de Mel
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main(){
    double volume, diametro, raio, altura, areaBase;

    while(scanf("%lf", &volume) != EOF){
        scanf("%lf", &diametro);
        raio = diametro / 2.0;

        areaBase = PI * (raio * raio);

        altura = volume / areaBase;

        printf("ALTURA = %.2lf\n", altura);
        printf("AREA = %.2lf\n", areaBase);
    }


    return 0;
}
