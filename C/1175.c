//1175 - Troca em Vetor I
#include <stdio.h>

int main(){
    int vetor[20] = {0};
    int temp1 = 0, temp2 = 0, num = 0, i = 0, j = 0;

    for(i = 0; i < 20; i++){
        scanf("%d", &num);
        vetor[i] = num;
    }

    for(i = 0, j = 19; i <= 9; i++, j--){
        temp1 = vetor[i];
        temp2 = vetor[j];
        vetor[i] = temp2;
        vetor[j] = temp1;
    }

    for(i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
