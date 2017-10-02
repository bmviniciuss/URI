#include <stdio.h>

double porc(int total, int animal){
    return ((double)animal * 100/total);
}


int main(){
    int casos = 0, total = 0, C = 0, R = 0, S= 0, i = 0, quant = 0;
    double pC = 0, pR = 0, pS = 0;
    char tipo;

    scanf("%d", &casos);

    for(i = 1; i <=casos; i++){
        scanf("%d %c", &quant, &tipo);
        if(tipo == 'C'){
            total += quant;
            C += quant;
        }
        else if(tipo == 'S'){
            total += quant;
            S += quant;
        }
        else if(tipo == 'R'){
            total += quant;
            R += quant;
        }
    }

    total = C + S + R;
    pC = porc(total, C);
    pS = porc(total, S);
    pR = porc(total, R);

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    printf("Percentual de coelhos: %.2lf %%\n", pC);
    printf("Percentual de ratos: %.2lf %%\n", pR);
    printf("Percentual de sapos: %.2lf %%\n", pS);
    return 0;
}
