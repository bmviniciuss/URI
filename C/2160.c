//2160 - Nome no Formulário
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 80

int main(){
    char nome[501];
    int len;

    scanf("%[^\n]", nome);
    len = strlen(nome);

    // for(int i = 0; i < len; i++){
    //     printf("%c\n", nome[i]);
    // }
    // printf("%d\n", len);
    if(len > MAX){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }


    return 0;
}
