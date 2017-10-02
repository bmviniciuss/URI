//1235 - De Dentro para Fora

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, casos, len, met, j;
    char texto[101], final[101];

    scanf("%d", &casos);

    while(casos > 0){
        getchar(); //clear
        scanf("%[^\n]s", texto);
        len = strlen(texto);
        met = len/2;

        //separa metade 1
        j = 0;
        for(i = met - 1; i >= 0; i--){
            final[j] = texto[i];
            j++;
        }
        //separa metade 2
        for(i = len - 1; i >= met; i--){
            final[j] = texto[i];
            j++;
        }
        final[len] = '\0';

        printf("%s\n", final);



        casos--;
    }

    return 0;
}
