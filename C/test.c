#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 200
int main(){
    char senha[MAX];
    int i, len, j;

    while(fgets(senha, MAX, stdin) != NULL){

        senha[strlen(senha) - 1] = '\0';
        printf("LEN: %d\n", len);

        for(j = 0; j < strlen(senha); j++){
            printf("INDEX: %d - C: %c\n", j, senha[j]);
        }

    }
    return 0;
}
