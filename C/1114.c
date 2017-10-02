#include <stdio.h>

int main(){
    int controle, senha, teste;
    senha = 2002;
    controle = 1;

    while(controle){
        scanf("%d", &teste);
        if(teste == senha){
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n");
            continue;
        }
    }

    return 0;
}
