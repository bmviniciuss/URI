//1173 - Preenchimento de Vetor I
#include <stdio.h>

int main(){
    int vetor[10] = {0}, num, i = 0;

    scanf("%d", &num);

    for(i = 0; i < 10; i++){
        vetor[i] = num;
        num *= 2;
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
