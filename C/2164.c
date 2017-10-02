//2164 - Fibonacci Rápido
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double fibo, n;

    scanf("%lf", &n);

    fibo = (pow(((1+(sqrt(5)))/2),n)-pow(((1-(sqrt(5)))/2),n))/(sqrt(5));

    printf("%.1lf\n", fibo);


    return 0;
}
