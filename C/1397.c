//1397 - Jogo do Maior
#include <stdio.h>

int main(){
    int casos, a, b, i, nA = 0, nB = 0;

    while(1){
        nA = nB = 0;
        scanf("%d", &casos);
        if(casos == 0) break;
        else{
            for(i = 0; i < casos; i++){
                scanf("%d %d", &a, &b);
                if(a == b){
                    //n faz nada
                }
                else if(a > b){
                    nA++;
                }
                else{
                    nB++;
                }
            }
            printf("%d %d\n", nA, nB);
        }
    }

    return 0;
}
