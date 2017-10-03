//2356 - Bactéria I
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char dna[105], test[105];
    char *controle;

    while (scanf("%s", dna) != EOF) {
        scanf("%s", test);

        controle = strstr(dna, test);

        if(!controle){
            printf("Nao resistente\n");
        }
        else{
            printf("Resistente\n" );
        }
    }

    return 0;
}
