//1158 - Soma de Ímpares Consecutivos III
#include <stdio.h>

int main(){
    int casos, i = 0, x = 0, y = 0, soma = 0, num = 0;
    int cont = 0;

    scanf("%d", &casos);
    for(i = 0; i < casos ; i ++){
        soma = 0;
        scanf("%d %d", &x, &y);
        if(x % 2 == 0){ // par
            x++;
            for(num = x, cont = 0; cont < y; num += 2, cont++){
                soma += num;
            }

        }
        else{ // impar
            for(num = x, cont = 0; cont < y; num += 2, cont++){
                soma += num;
            }

        }
        printf("%d\n", soma);
    }


    return 0;
}
