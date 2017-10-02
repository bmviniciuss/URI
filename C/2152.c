//2152 - Pepe, Já Tirei a Vela!
#include <stdio.h>
#include <stdlib.h>

int main(){
    int hora, min, cod, casos;

    scanf("%d", &casos);

    while(casos--){
        scanf("%d %d %d", &hora, &min, &cod);

        //hora
        if(hora < 10){
            printf("0%d:", hora);
        }
        else{
            printf("%d:", hora);
        }

        //min
        if(min < 10){
            printf("0%d", min);
        }
        else{
            printf("%d", min);
        }

        //prita resto
        if(cod == 1){
            printf(" - A porta abriu!\n");
        }
        else{
            printf(" - A porta fechou!\n");
        }
    }


    return 0;
}
