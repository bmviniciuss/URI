//1329 - Cara ou Coroa
#include <stdio.h>

int main(){
    int mary = 0, john = 0;
    int jogos = 1, i, jogada;

    while(1){
        mary = john = 0;
        scanf("%d", &jogos);
        if(jogos == 0) break;
        else{
            for(i = 0; i < jogos; i++){
                scanf("%d", &jogada);
                if(jogada == 1){
                    john++;
                }
                else if(jogada == 0){
                    mary++;
                }
            }
            printf("Mary won %d times and John won %d times\n", mary, john);
        }
    }
    return 0;
}
