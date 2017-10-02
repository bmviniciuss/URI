//1160 - Crescimento Populacional
#include <stdio.h>

int main(){
    int casos, i = 0, popA = 0, popB = 0, nAnos = 0;
    double taxaA, taxaB;

    scanf("%d", &casos);

    for(i = 0; i < casos; i++){
        nAnos = 0;
        scanf("%d %d %lf %lf", &popA, &popB, &taxaA, &taxaB);

        while(popB >= popA){
            popA += (int)(popA * (taxaA/100));
            popB += (int)(popB * (taxaB/100));
            nAnos++;
            if(nAnos > 100){
                break;
            }
        }
        if(nAnos > 100){
            printf("Mais de 1 seculo.\n");
        }
        else{
            printf("%d anos.\n", nAnos);
        }
    }

    return 0;
}
