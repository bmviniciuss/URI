// 1132 - Múltiplos de 13
#include <stdio.h>

int main(){
    int x, y, min, max, i, soma = 0;

    scanf("%d %d", &x, &y);
    if(x>y){
        min = y;
        max = x;
    }
    else{
        min = x;
        max = y;
    }

    for(i = min; i <= max; i++){
        if(i%13 != 0){
            soma += i;
        }
    }
    printf("%d\n", soma);


    return 0;
}
