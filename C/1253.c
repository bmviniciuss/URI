//1253 - Cifra de César
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int casos, des, i, code;
    char men[55], c;

    scanf("%d", &casos);

    while(casos > 0){
        scanf("%s", men);
        scanf("%d", &des);

        for(i = 0; i < strlen(men); i++){
            c = men[i];
            if(c >= 'A' && c <= 'Z'){
                if(c == '\0') break;
                if((c - des) < 'A'){
                    printf("%c", ((c - des) + 26));
                }
                else{
                    printf("%c", c - des);
                }
            }
        }
        printf("\n");

        casos--;
    }

    return 0;
}

// a b c d e f g h i j k l m n o p q
