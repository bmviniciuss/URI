#include <stdio.h>

int main(){
    int N1, D1, N2, D2, i, n_casos, nn_casos;
    char op;
    int numerador, denominador, j;

    scanf("%d", &nn_casos);
    for(j = 1; j<=nn_casos; j++){
        scanf("%d / %d %c %d / %d", &N1,&D1, &op, &N2,&D2);

        //soma
        if(op == '+'){
            numerador = (N1*D2 + N2*D1);
            denominador = (D1*D2);
        }
        //subtração
        else if(op == '-'){
            numerador = (N1*D2 - N2*D1);
            denominador = (D1*D2);
        }
        //divisão
        else if(op=='/'){
            numerador = (N1*D2);
            denominador = (N2*D1);
        }
        //multiplicação
        else if(op == '*'){
            numerador = (N1*N2);
            denominador = (D1*D2);
        }

        printf("%d/%d = ", numerador, denominador);

        for(i = 1; i <=5; i++){
            if(numerador%i == 0){
                if(denominador%i == 0){
                    numerador /= i;
                    denominador /= i;
                }
            }
        }

        printf("%d/%d\n", numerador, denominador);
    }
    return 0;
}
