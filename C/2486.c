#include <stdio.h>
#include <string.h>

int vitamina(int vitC, int quant){
    return vitC * quant;
}

int main(){
    char alimento[30];
    int casos, i, quant, vitC, quantC, vitCTotal ,dife;


    do{
        scanf("%d", &casos);

        vitCTotal = 0;

        for(i = 1; i <=casos; i++){
            scanf("%d %[^\n]%*c", &quant , alimento);
            if(strcmp(alimento, "suco de laranja") == 0){
                vitC = 120;
                vitCTotal += vitamina(vitC, quant);
            }

            else if(strcmp(alimento, "morango fresco") == 0){
                vitC = 85;
                vitCTotal += vitamina(vitC, quant);
            }
            else if(strcmp(alimento, "mamao") == 0){
                vitC = 85;
                vitCTotal += vitamina(vitC, quant);
            }
            else if(strcmp(alimento, "goiaba vermelha") == 0){
                vitC = 70;
                vitCTotal += vitamina(vitC, quant);
            }
            else if(strcmp(alimento, "manga") == 0){
                vitC = 56;
                vitCTotal += vitamina(vitC, quant);
            }
            else if(strcmp(alimento, "laranja") == 0){
                vitC = 50;
                vitCTotal += vitamina(vitC, quant);
            }
            else if(strcmp(alimento, "brocolis") == 0){
                vitC = 34;
                vitCTotal += vitamina(vitC, quant);
            }
            if(i == casos){
                if(vitCTotal >= 110 && vitCTotal <=130){
                    printf("%d mg\n", vitCTotal);
                }
                else if(vitCTotal > 130){
                    dife = vitCTotal - 130;
                    printf("Menos %d mg\n", dife);
                }
                else{
                    dife = 110 - vitCTotal;
                    printf("Mais %d mg\n", dife);
                }

            }
        }//fim for

    }while(casos != 0);//fim do-while
    return 0;
} // fim main
