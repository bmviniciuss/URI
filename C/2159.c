//2159 - Número Aproximado de Primos
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    unsigned long long int n;
    double min, max;

    scanf("%llu", &n);

    min = ((n)/log(n));
    max = ((1.25506)*min);

    printf("%.1lf %.1lf\n", min, max);


    return 0;
}
