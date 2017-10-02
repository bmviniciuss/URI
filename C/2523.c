//2523 - A Mensagem de Will
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    char men[30];
    int nLam, lam;

    while(scanf("%s", men) != EOF){
        scanf("%d", &nLam);

        while(nLam--){
            scanf("%d", &lam);
            printf("%c", men[lam-1]);
        }
        printf("\n");

    }


    return 0;
}
