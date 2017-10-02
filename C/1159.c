//1159 - Soma de Pares Consecutivos
#include <stdio.h>

int main(){
    int num = 1, i = 0, soma = 0, pares = 5;

    while(1){
        scanf("%d", &num);
        if(num != 0){
            soma = 0;
            if(num % 2 == 0){ //par
                for(i = 0; i < pares; i++){
                    soma += num;
                    //printf("%d ", num);
                    num += 2;
                }
                printf("%d\n", soma);
            }
            else{ //impar
                num++;
                for(i = 0; i < pares; i++){
                    soma += num;
                    //printf("%d ", num);
                    num += 2;
                }
                printf("%d\n", soma);
            }
        }
        else{
            break;
        }
    }

    return 0;
}
