//1189 - Área Esquerda
#include <stdio.h>

int main(){
    double vetor[12][12], num, resultado = 0;
    int col, lin, min, max;
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
    //area esquerda
    min = 1;
    max = 10;
    for(col = 0; col <= 4; col++){
        for(lin = min; lin <= max; lin++){
            resultado += vetor[lin][col];
        }
        min++;
        max--;
    }
    //op
    switch(op){
        case 'S':
            printf("%.1lf\n", resultado);
            break;
        case 'M':
            printf("%.1lf\n", resultado/30);
            break;
    }

    return 0;
}
