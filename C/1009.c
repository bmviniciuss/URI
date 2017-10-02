#include <stdio.h>

int main(){
    char nome;
    double salarioFixo, vendasMes, salarioFinal;

    scanf("%s%lf%lf", &nome, &salarioFixo, &vendasMes);

    salarioFinal = salarioFixo + (0.15 * vendasMes);

    printf("TOTAL = R$ %.2lf", salarioFinal);
    return 0;
}
