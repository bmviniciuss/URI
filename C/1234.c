#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[51], letra;
    int i, j, danca;

    while(fgets(frase, 51, stdin) != NULL){
        danca = 0;
        j = 0;
        for(i = 0; i < strlen(frase); i++){
            letra = frase[i];
            if(letra == '\n'){
                break;
            }
            if(letra == ' '){
                printf(" ");
                j++;
            }
            else if(j%2 == 0){ //par - maisculo
                if(letra >= 'a' && letra <= 'z'){
                    printf("%c", letra - 32);
                }
                else{
                    printf("%c", letra);
                }
            }
            //impar - minusculo
            else if(letra >= 'A' && letra <= 'Z'){
                printf("%c", letra + 32);
            }
            else{
                printf("%c", letra);
            }
            j++;
        }
        printf("\n");
    }

    return 0;
}
