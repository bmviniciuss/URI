#include <stdio.h>
#include <math.h>

int main(){
    int distancia, tempo; //em Km
    /*
    carro x
    v0 = 60km/h - 1km/min cte
    carro y
    v0 = 90km/h - 1.5 km/min cte
    x = x0 + vot
    x = x0 + vot
    t = ((-KM)/(vox - voy))
    */
    scanf("%d", &distancia);

    tempo = ((-distancia)/(1-1.5));
    printf("%d minutos\n", tempo);

    return 0;
}
