// 1131 - Grenais
#include <stdio.h>

int main(){
    int golInter, golGremio, vitInter, vitGremio, empates ,nGrenais;
    int golTgremio, golTinter;
    golInter = golGremio = vitInter = vitGremio = nGrenais = empates =0;
    int controle;

    while(1){
        scanf("%d %d", &golInter, &golGremio);
        nGrenais +=1;
        if(golInter == golGremio){
            empates += 1;
        }
        else{
            if(golInter > golGremio){
                vitInter += 1;
            }
            else{
                vitGremio += 1;
            }
        }
        golTinter += golInter;
        golTgremio += golTgremio;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &controle);

        if(controle == 1){
            //sim
            continue;
        }
        else{
            // não
            printf("%d grenais\n", nGrenais);
            printf("Inter:%d\n", vitInter);
            printf("Gremio:%d\n", vitGremio);
            printf("Empates:%d\n", empates);
            if(vitInter == vitGremio){
                printf("Nao houve vencedor\n");
            }
            else{
                if(vitInter > vitGremio){
                    printf("Inter venceu mais\n");
                }
                else{
                    printf("Gremio venceu mais\n");
                }
            }
            break;
        }

    }




    return 0;
}
