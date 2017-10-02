//1164 - Número Perfeito
#include <stdio.h>

int main(){
    int casos ,num, i, j, soma;

    scanf("%d", &casos);

    for(i = 0; i < casos; i++){
        soma = 0;
        scanf("%d", &num);
        for(j = 1; j < num; j++){
            if(num%j == 0){
                soma += j;
            }
        }
        if(soma == num){
            printf("%d eh perfeito\n", num);
        }
        else{
            printf("%d nao eh perfeito\n", num);
        }
    }

    return 0;
}
