//1149 - Somando Inteiros Consecutivos
#include <stdio.h>

int main(){
    int a, n, soma = 0, i = 0, num = 0;

    scanf("%d %d", &a, &n);
    while(1){
        if(n <= 0){
            scanf("%d", &n);
        }
        else{
            break;
        }
    }

    for(i = 0; i < n; i++){
        num = a + i;
        soma += num;
    }

    printf("%d\n", soma);
    return 0;
}
