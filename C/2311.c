//2311 - Saltos Ornamentais
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define JUR 7

int main(){
    char nome[50];
    double notas[JUR], soma, grau, aux;
    int i, j, casos;

    scanf("%d", &casos);

    while(casos--){
        soma = 0;
        grau = 0;
        aux = 0;
        //nome
        scanf("%s %lf", nome, &grau);
        //prenche vetor
        for(i = 0; i < JUR; i++){
            scanf("%lf", &notas[i]);
        }
        // ordena vetor
        for(i = 0; i < JUR; i++){
            for(j = 0; j < JUR - 1; j++){
                if(notas[j] > notas[j + 1]){
                    aux = notas[j];
                    notas[j] = notas[j + 1];
                    notas[j + 1] = aux;
                }
            }
        }

        //add a soma
        for(i = 1; i < JUR -1; i++){
            soma += notas[i];
        }
        soma *= grau;
        printf("%s %.2lf\n", nome, soma);
    }


    return 0;
}
