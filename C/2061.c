//2061 - As Abas de Péricles
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int nAbas = 0, acoes, inAbas;
    char acao[25];

    scanf("%d %d", &inAbas, &acoes);
    getchar();

    nAbas = inAbas;

    while(acoes--){
        scanf("%s", acao);

        if(!(strcmp(acao, "clicou"))){
            nAbas--;
        }
        else if(!(strcmp(acao, "fechou"))){
            nAbas++;
        }
    }

    printf("%d\n", nAbas);
    return 0;
}
