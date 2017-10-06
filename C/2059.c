//2059 - Ímpar, Par ou Roubo
#include <stdio.h>
#include <stdlib.h>

int main(){
    int p, j1, j2, r, a, total, c = 3;

    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    total = j1 + j2;

    if((total % 2 == 0 && p == 1) || (total % 2 != 0 && p == 0)){
        c = 1;
    }
    else{
        c = 2;
    }
    if((r == 1 && a == 0) || (r == 0 && a == 1)){
        c = 1;
    }
    else if(r == 1 && a == 1){
        c = 2;
    }

    printf("Jogador %d ganha!\n", c);


    return 0;
}
