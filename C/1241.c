//1241 - Encaixa ou Não II

#include <stdio.h>
#include <string.h>

int main(){
    int casos, i, j, k, index, tamanho1, tamanho2, controle;
    char num1[1001], num2[1001];

    scanf("%d", &casos);

    for(i = 0; i < casos; i++){
        controle = 0;

        scanf("%s", num1);
        scanf("%s", num2);

        tamanho1 = strlen(num1);
        tamanho2 = strlen(num2);
        index = tamanho1 - tamanho2;

        for(j = 0, k = index; j < tamanho2; j++, k++){
            // printf("NUM 1: %c - NUM2: %c\n", num1[k], num2[j]);
            if( num1[k] == num2[j]){
                controle++;
            }

        }
        // printf("controle: %d\n", controle);
        if(controle == (tamanho2)){
            printf("encaixa\n");
        }
        else{
            printf("nao encaixa\n");
        }
    }


    return 0;
}
