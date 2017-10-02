//2356 - Bacteria 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char bac[105], res[105], lRes, lBac,comp[105], letra;
    int final = 0, lenBac, lenRes, i, j, cont = 0, k, l;

    // while(scanf("%s", bac) != EOF){
    // while(fgets(bac, 105, stdin) != NULL){
    while(1){
        // getchar();
        scanf("%s", bac);
        if(!bac){
            break;
        }
        lenBac = strlen(bac);
        scanf("%s", res);
        lenRes = strlen(res);


        printf("BAC: %s\n", bac);
        printf("RES: %s\n", res);
        printf("LEN BAC: %d\n", lenBac);
        printf("LEN RES: %d\n", lenRes);
        cont = 0;
        i = 0;
        for(i = 0; i < lenRes; i++){
            lRes = res[i];
            for(j = 0; j < lenBac; j++){
                lBac = bac[j];
                if(lRes == lBac)
                    break;
            }
            break;
        }
        printf("J: %d\n", j);
        l = 0;
        k = 0;
        for(k = j; k < (lenBac - lenRes); k++){
            printf("K: %d- CHAR: %c\n", k, bac[k]);
            comp[l] = bac[k];
            l++;
        }

        if(!(strcmp(res, comp))){
            printf("Resistente\n");
        }
        else{
            printf("Nao resistente\n");
        }
        printf("BAC: %s\n", bac);
        printf("RES: %s\n", res);
        printf("COMP: %s\n", comp);

    }


    return 0;
}
