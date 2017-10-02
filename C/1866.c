//1866 - Conta
#include <stdio.h>

int main(){
    int casos, n, soma = 0, i, j, k;

    scanf("%d", &casos);

    for(i = 0; i < casos; i++){
        soma = 0;
        scanf("%d", &n);
        k = 1;
        for(j = 1; j <= n; j++, k *= -1){
            soma += k;
        }
        printf("%d\n", soma);
    }

    return 0;
}
