//1177 - Preenchimento de Vetor II
#include <stdio.h>

int main(){
    int vetor[1000] = {0}, num, i = 0, cont = 0;

    scanf("%d", &num);

    for(i = 0; i < 1000; i++){
        vetor[i] = cont;
        printf("N[%d] = %d\n", i, vetor[i]);
        cont++;

        if(cont == num){ // ve e contador chegou no limite e zera
            cont = 0;
        }
    }

    return 0;
}
