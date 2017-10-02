//1153 - Fatorial Simples
#include <stdio.h>

int main(){
    int n, fat = 1, i = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        fat *= i;
    }
    printf("%d\n", fat);

    return 0;
}
