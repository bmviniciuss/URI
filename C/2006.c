//2006 - Identificando o Chá
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define TAM 5

int main(){
    int chas[TAM], cha, n = 0, i;

    scanf("%d", &cha);

    //prenche vetor
    for(i = 0; i < TAM; i++){
        scanf("%d", &chas[i]);
        if(chas[i] == cha){
            n++;
        }
    }

    printf("%d\n", n);


    return 0;
}
