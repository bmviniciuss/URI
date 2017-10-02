//1179 - Preenchimento de Vetor IV
#include <stdio.h>

int main(){
    int par[5] = {0}, impar[5] = {0}, i = 0,cP = 0, cI = 0, num;
    int p = 0;

    for(i = 0; i < 15; i++){
        scanf("%d", &num);
        if(num % 2 == 0){ // par
            if(cP == 5){ // se lista ta cheia
                for(p = 0; p < 5; p++){
                    printf("par[%d] = %d\n", p, par[p]);
                }
                cP = 0;
            }
            else{
                par[cP] = num;
                cP++;
            }
        }
        else{ // impar
            if(cI == 5){ // se lista ta cheia
                for(p = 0; p < 5; p++){
                    printf("impar[%d] = %d\n", p, impar[p]);
                }
                cI = 0;
            }
            else{
                impar[cI] = num;
                cI++;
            }
        }
    }

    for(p = 0; p < 5; p++){
        printf("impar[%d] = %d\n", p, impar[p]);
    }
    for(p = 0; p < 5; p++){
        printf("par[%d] = %d\n", p, par[p]);
    }

    return 0;
}
