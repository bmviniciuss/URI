//1073 - Quadrado de Pares
#include <stdio.h>

int main(){
    int num, i = 0;

    scanf("%d", &num);

    for(i = 1; i<= num; i++){
        if(i%2 == 0){
            printf("%d^2 = %d\n", i, (i*i));
        }
    }

    return 0;
}
