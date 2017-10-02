#include <stdio.h>

int main(){
    int distancia; // distancia total percorrida(Km)
    double consumo; //combustivel gasto(litros)
    double consumoMedio;//Km/L

    scanf("%d%lf", &distancia, &consumo);

    consumoMedio = (distancia/consumo);

    printf("%.3lf km/l\n", consumoMedio);
    return 0;
}
