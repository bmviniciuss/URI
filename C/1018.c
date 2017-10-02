#include <stdio.h>

int main(){
    static int values[ 7 ] = {100, 50, 20, 10, 5 ,2, 1};
    static int cedulas[ 7 ];
    int valor, i, controle;
    /*
    cedulas
    valor - index
    100 - 0
    50 - 1
    20 - 2
    10 - 3
    5 - 4
    2 - 5
    1 - 6
    */

    scanf("%d", &valor);

    printf("%d\n", valor);

    for(i = 0; i <= 6; i++){
        controle = values[i];
        while(valor >= controle){
            valor -= controle;
            cedulas[i] += 1;
        }
    }

    printf("%d nota(s) de R$ 100,00\n", cedulas[0]);
    printf("%d nota(s) de R$ 50,00\n", cedulas[1]);
    printf("%d nota(s) de R$ 20,00\n", cedulas[2]);
    printf("%d nota(s) de R$ 10,00\n", cedulas[3]);
    printf("%d nota(s) de R$ 5,00\n", cedulas[4]);
    printf("%d nota(s) de R$ 2,00\n", cedulas[5]);
    printf("%d nota(s) de R$ 1,00\n", cedulas[6]);
    return 0;
}
