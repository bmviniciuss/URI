//1156 - Sequência S
#include <stdio.h>

int main(){
    double soma = 0, cima = 1, baixo = 1;

    for(baixo = 1; baixo <= 100; baixo++){
        //printf("Cima: %lf ", cima);
        //printf("Baixo: %lf\n", baixo);
        soma += (cima/baixo);
    }

    printf("%.2lf\n", soma);

    return 0;
}
