//2168 - Crepúsculo em Portland
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n, lin, col, soma;

    scanf("%d", &n);
    int quadras[n+1][n+1];

    //prenche matriz
    for(lin = 0; lin <= n; lin++){
        for(col = 0; col <= n; col++){
            scanf("%d", &quadras[lin][col]);
        }
    }

    //compara matriz - separacao por quadranted
    for(lin = 0; lin < n; lin++){
        for(col = 0; col < n; col++){
            //soma dos valores de cada quadrante
            soma = quadras[lin][col] + quadras[lin][col + 1] + quadras[lin+ 1][col] + quadras[lin + 1][col + 1];
            if(soma < 2){
                printf("U");
            }
            else{
                printf("S");
            }
        }
        printf("\n");
    }



    return 0;
}
