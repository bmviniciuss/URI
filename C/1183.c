//1183 - Acima da Diagonal Principal
#include <stdio.h>

int main(){
    double vetor[12][12], num, resultado = 0;
    int col, lin, i;
    char op;

    //operação
    scanf("%c", &op); //op

    //prenchimento do vetor
    for(lin = 0; lin < 12; lin++){
        for(col = 0; col < 12; col++){
            scanf("%lf", &num);
            vetor[lin][col] = num;
        }
    }
    //acima da diagonal principal
    i = 1;
    for(lin = 0; lin < 12; lin++){
        for(col = i; col < 12; col ++){
            resultado += vetor[lin][col];
        }
        i++;
    }

    //op
    switch(op){
        case 'S':
            printf("%.1lf\n", resultado);
            break;
        case 'M':
            printf("%.1lf\n", resultado/66);
            break;
    }

    return 0;
}
