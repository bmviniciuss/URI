//1165 - Número Primo
#include <stdio.h>

int main(){
    int casos, i, num, j, soma;

    scanf("%d", &casos);

    for(i = 0; i < casos; i++){
        soma = 0;
        scanf("%d", &num);
        for(j = 1; j <= num; j++){
            if(num%j == 0){
                soma += j;
            }
        }
        if(soma == num + 1){
            printf("%d eh primo\n", num);
        }
        else{
            printf("%d nao eh primo\n", num);
        }
    }

    return 0;
}
