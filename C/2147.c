//2147 - Galopeira
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TIME 0.01

int main(){
    int len, casos;
    double tempo;
    char palavra[10005];

    scanf("%d", &casos);

    while(casos--){
        scanf("%s", palavra);

        len = strlen(palavra);
        tempo = len * TIME;

        printf("%.2lf\n", tempo);
    }


    return 0;
}
