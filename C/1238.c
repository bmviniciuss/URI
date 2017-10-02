//1238 - Combinador
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int casos, i, j, max, len1, len2;
    char cad1[51], cad2[51];

    scanf("%d", &casos);

    while(casos > 0){
        scanf("%s", cad1);
        scanf("%s", cad2);

        len1 = strlen(cad1);
        len2 = strlen(cad2);

        //checa maximo de interacoes
        if(len1 < len2){
            max = len2;
        }
        else{
            max = len1;
        }

        for(i = 0; i < max; i++){
            if(i < len1){
                printf("%c", cad1[i]);
            }
            if(i < len2){
                printf("%c", cad2[i]);
            }
        }
        printf("\n");


        casos--;
    }

    return 0;
}
