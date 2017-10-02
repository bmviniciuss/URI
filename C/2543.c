//2543 - Jogatina UFPR
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    long int id, publicacoes, nVideos = 0, cod, gameId;
    //gameId - 0 - CS
    //gameId - 1 - LOL

    while(scanf("%ld %ld", &publicacoes, &id) != EOF){
        nVideos = 0;
        while(publicacoes--){
            scanf("%ld %ld", &cod, &gameId);
            if(cod == id && gameId == 0){
                nVideos++;
            }
        }
        printf("%ld\n", nVideos);

    }


    return 0;
}
