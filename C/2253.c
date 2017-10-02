//2253 - Validador de Senhas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 200

int main(){
    char senha[MAX], letra;
    int len, min = 0, mai = 0, num = 0, bad = 0, i;

    while(scanf("%[^\n]s",senha) != EOF){
        getchar();
        int len = strlen(senha);
        senha[len ] = '\0';
        // printf("LEN: %d\n", len);
        min = mai = num = bad = 0;
        if (len >= 6 && len <= 32){
            for(i = 0; i < strlen(senha); i++){
                letra = senha[i];
                // printf("LETRA: %c\n", letra);
                if(letra >= 'a' && letra <= 'z'){
                    min = 1;
                }
                else if(letra >= 'A' && letra <= 'Z'){
                    mai = 1;
                }
                else if(letra >= '0' && letra <= '9'){
                    num = 1;
                }
                else{
                    bad = 1;
                    break;
                }
                // printf("BAD: %d - MIN: %d - MAI: %d - NUM: %d\n", bad, min, mai, num);
            }
            if(bad || !mai || !min || !num){
                printf("Senha invalida.\n");
            }
            else{
                printf("Senha valida.\n");
            }
        }
        else{
            printf("Senha invalida.\n");
        }
    }


    return 0;
}
