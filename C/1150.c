//1159 - Ultrapassando Z
#include <stdio.h>

int main(){
    int x, z, contador = 0, soma = 0, i;

    scanf("%d %d", &x, &z);
    while(z <= x){
        scanf("%d", &z);
    }

    i = 0;
    while(soma <= z){
        soma += x + i;
        i++;
        contador++;
    }
    printf("%d\n", contador);

    return 0;
}
