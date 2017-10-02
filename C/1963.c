//1963 - O Filme
#include <stdio.h>
#include <stdlib.h>

double porcentagem(double a, double b);

int main(){
    double a,b, porc;

    scanf("%lf %lf", &a, &b);

    porc = porcentagem(a , b);
    printf("%.2lf%%\n", porc);

    return 0;
}

double porcentagem(double a, double b){
    double porc;
    porc = (double)((b/a)-1.0)*100;
    return porc;
}
