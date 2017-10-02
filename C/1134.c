// 1134 - Tipo de Combustível
#include <stdio.h>

int main(){
    int tipo, alcool, gasolina, diesel;
    tipo = alcool = gasolina = diesel = 0;

    while(1){
        scanf("%d", &tipo);
        if(tipo >= 1 && tipo <=4){
            if(tipo == 1){ //alcool
                alcool += 1;
            }
            else if(tipo == 2){ // gasolina
                gasolina += 1;
            }
            else if(tipo == 3){ //diesel
                diesel += 1;
            }
            else if(tipo == 4){ // fim
                printf("MUITO OBRIGADO\n");
                printf("Alcool: %d\n", alcool);
                printf("Gasolina: %d\n", gasolina);
                printf("Diesel: %d\n", diesel);
                break;
            }

        }
        else{
            continue;
        }
    }


    return 0;
}
