//1921 - Guilherme e Suas Pipas
#include <stdio.h>

int main(){
    unsigned long long int lados, barbante;

    scanf("%llu", &lados);

    barbante = (lados*(lados - 3))/2;

    printf("%llu\n", barbante);
    return 0;
}
