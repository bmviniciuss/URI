//2540 - Impeachment do Líder
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, vote ,nP = 0, i;
    double fraction;

    while(scanf("%d", &n) != EOF){
        fraction = (double)n * (2.0/3.0);
        nP = 0;
        for(i = 0; i < n; i++){
            scanf("%d", &vote);
            if(vote == 1){ // a favor
                nP++;
            }
        }
        if(nP >= fraction){
            printf("impeachment\n");
        }
        else{
            printf("acusacao arquivada\n");
        }
    }


    return 0;
}
