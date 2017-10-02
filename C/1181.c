//1181 - Linha na Matriz
#include <stdio.h>

int main(){
    double vetor[12][12], num, resultado = 0;
    int col, lin, opLinha;
    char op;

    //operação
    scanf("%d %c", &opLinha, &op); //op

    //prenchimento do vetor
    for(lin = 0; lin < 12; lin++){
        for(col = 0; col < 12; col++){
            scanf("%lf", &num);
            vetor[lin][col] = num;
        }
    }
    for(col = 0; col < 12; col++){
        resultado += vetor[opLinha][col];
    }

    //op
    switch(op){
        case 'S':
            printf("%.1lf\n", resultado);
            break;
        case 'M':
            printf("%.1lf\n", resultado/12);
            break;
    }

    return 0;
}
