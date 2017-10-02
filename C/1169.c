//1169 - Trigo no Tabuleiro
#include <stdio.h>

int main(){
    unsigned long long int trigo[64], soma, totalKg;
    int casos, casas, i, j;

    //adiciona trigo por casas
    trigo[0] = 1;
    for(i = 1; i < 64; i++){
        trigo[i] = (trigo[i-1]*2);
    }

    // op
    scanf("%d", &casos);
    for(i = 0; i < casos; i++){
        scanf("%d", &casas);
        soma = 0; //numero de graos
        for(j = 0; j < casas; j++){
            soma += trigo[j];
        }
        totalKg = (soma * 0.001)/(12);
        printf("%llu kg\n", totalKg);
    }

    return 0;
}
