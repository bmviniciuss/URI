// 1133 - Resto da Divisão
#include <stdio.h>

int main(){
    int x, y, min, max, i;

    scanf("%d %d", &x, &y);
    if(x>y){
        min = y;
        max = x;
    }
    else{
        min = x;
        max = y;
    }

    for(i = min + 1; i < max; i++){
        if(i%5 == 2 || i%5 == 3){
            printf("%d\n", i);
        }
    }


    return 0;
}
