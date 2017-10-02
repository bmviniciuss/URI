//1156 - Sequência S II
#include <stdio.h>

int main(){
    double soma = 0, cima = 1, baixo = 1;

    for(cima = 1, baixo = 1; cima <= 39; cima += 2, baixo *=2){
        //printf("Cima: %d ", cima);
        //printf("Baixo: %d\n", baixo);
        soma += (cima/baixo);
    }

    printf("%.2lf\n", soma);

    return 0;
}
