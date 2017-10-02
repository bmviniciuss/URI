//2062 - OBI URI
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int nPa, cont, n, i;
    char palavra[25];

    scanf("%d", &n);

    nPa = n;

    while(n > 0){
        scanf("%s", palavra);
        if(strlen(palavra) == 3){
            if(palavra[0] == 'O' && palavra[1] == 'B'){
                palavra[2] = 'I';
            }
            else if(palavra[0] == 'U' && palavra[1] == 'R'){
                palavra[2] = 'I';
            }
        }
        if(n == 1){
            printf("%s", palavra);
        }
        else{
            printf("%s ", palavra);
        }


        n--;
    }
    printf("\n");


    return 0;
}
