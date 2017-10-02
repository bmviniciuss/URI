//2172 - Evento
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x, m, total;

    while(1){
        scanf("%d %d", &x, &m);
        if(x == 0 && m == 0) break;

        total = x * m;
        printf("%d\n", total);
    }


    return 0;
}
