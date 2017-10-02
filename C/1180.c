//1180 - Menor e Posição
#include <stdio.h>

int main(){
    int tam, i, posicao, menor, num;

    scanf("%d", &tam);

    int vetor[tam];

    //adiciona a vetor
    for(i = 0; i < tam; i++){
        scanf("%d", &num);
        vetor[i] = num;
    }
    //compara elementos do vetor
    menor = vetor[0];
    for(i = 0; i < tam; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
