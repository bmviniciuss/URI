//1426 - Coloque Tijolos na Parede - CONTINUAR
#include <stdio.h>

int main(){
    int lin1[1], lin2[2], lin3[3], lin4[4], lin5[5], lin6[6], lin7[7], lin8[8], lin9[9];
    int casos, i, j;

    scanf("%d\n", &casos);

    for(i = 0; i < casos; i++){
        // lin 1
        scanf("%d", &lin1[0]);
        // lin 3
        scanf("%d %d", &lin3[0], &lin3[2]);
        // lin 5
        scanf("%d %d %d", &lin5[0], &lin5[2], &lin5[4]);
        // lin 7
        scanf("%d %d %d %d", &lin7[0], &lin7[2], &lin7[4], &lin7[6]);
        //lin 9
        scanf("%d %d %d %d %d", &lin9[0], &lin9[2], &lin9[4], &lin9[6], &lin9[8]);

        if(lin1[0] % 2 == 0){
            printf("PAR\n");// for par
            //lin2
            for(j = 0; j < 2; j++){
                lin2[j] = lin1[0]/2;
            }
            //lin4
            lin4[0] = lin4[1] = lin4[2] = lin4[3] = (lin3[0] / 2);
            //lin6
            lin6[0] = lin6[1] = lin6[2] = lin6[3] = lin6[4] = lin6[5] = (lin5[0]/2);
            //lin8
            lin8[0] = lin8[1] = lin8[2] = lin8[3] = (lin7[0]/2);
            lin8[4] = lin8[5] = lin8[6] = lin8[7] = (lin7[0]/2);
        }
        else{ //for impar
            printf("Impar\n");
        }

        //printa piramide
        printf("%d\n", lin1[0]);
        printf("%d %d\n", lin2[0], lin2[1]);
        printf("%d %d %d\n", lin3[0], lin3[1], lin3[2]);
        printf("%d %d %d %d\n", lin4[0], lin4[1], lin4[2], lin4[3]);
        printf("%d %d %d %d %d\n", lin5[0], lin5[1], lin5[2], lin5[3], lin5[4]);
        printf("%d %d %d %d %d %d\n", lin6[0], lin6[1], lin6[2], lin6[3], lin6[4], lin6[5]);
        printf("%d %d %d %d %d %d %d\n", lin7[0], lin7[1], lin7[2], lin7[3], lin7[4], lin7[5], lin7[6]);
        printf("%d %d %d %d %d %d %d %d\n", lin8[0], lin8[1], lin8[2], lin8[3], lin8[4], lin8[5], lin8[6], lin8[7]);
        printf("%d %d %d %d %d %d %d %d %d\n", lin9[0], lin9[1], lin9[2], lin9[3], lin9[4], lin9[5], lin9[6], lin9[7], lin9[8]);
    }

    return 0;
}
