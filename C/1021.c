#include <stdio.h>

int main(){
    int inteira, decimal, c, m, m2;
    int values_c[ 6 ] = {100, 50, 20, 10, 5 ,2};
    int values_m[ 6 ] = {100, 50, 25, 10, 5, 1};
    int n_cedulas [ 6 ] = {0,0,0,0,0,0};
    int n_moedas[ 6 ] = {0,0,0,0,0,0};


    scanf("%d.%d", &inteira, &decimal);
    //printf("PARTE INTEIRA: %d\n", inteira);
    //printf("PARTE DECIMAL: %d\n", decimal);


    //loop das cedulas(parte inteira)
    for(c = 0; c <= 5; c++){
        while(inteira >= values_c[c]){
            inteira -= values_c[c];
            n_cedulas[c] += 1;
        }
    }
    //printf("------------------------\n");
    //printf("PARTE INTEIRA: %d\n", inteira);
    //printf("PARTE DECIMAL: %d\n", decimal);

    decimal += (inteira*100);
    inteira -= inteira;

    //printf("------------------------\n");
    //printf("PARTE INTEIRA: %d\n", inteira);
    //printf("PARTE DECIMAL: %d\n", decimal);

    for(m2 = 0; m2 <= 5; m2++){
        while(decimal >= values_m[m2]){
            //printf("ANTES: %d\n", decimal);
            //printf("VALOR RETIRADO: %f\n", values_m[m2]/100.0);

            decimal -= values_m[m2];
            //printf("DEPOIS: %d\n", decimal);
            n_moedas[m2] += 1;
        }
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n_cedulas[0]);
    printf("%d nota(s) de R$ 50.00\n", n_cedulas[1]);
    printf("%d nota(s) de R$ 20.00\n", n_cedulas[2]);
    printf("%d nota(s) de R$ 10.00\n", n_cedulas[3]);
    printf("%d nota(s) de R$ 5.00\n", n_cedulas[4]);
    printf("%d nota(s) de R$ 2.00\n", n_cedulas[5]);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", n_moedas[0]);
    printf("%d moeda(s) de R$ 0.50\n", n_moedas[1]);
    printf("%d moeda(s) de R$ 0.25\n", n_moedas[2]);
    printf("%d moeda(s) de R$ 0.10\n", n_moedas[3]);
    printf("%d moeda(s) de R$ 0.05\n", n_moedas[4]);
    printf("%d moeda(s) de R$ 0.01\n", n_moedas[5]);
    //printf("Sobrando: %d.%d\n", inteira, decimal/100);
    return 0;
}
