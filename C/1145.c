//1145 - Sequência Lógica 2
#include <stdio.h>

int main(){
    int step, max, i = 0, c;

    scanf("%d %d", &step, &max);

    for(c = 1; c <= max; c++){
        printf("%d", c);
        i += 1; // adiciona ao numero de elementos posto na linha
        if(i == step){ // se n for igual ao max de elemtos por linha
            printf("\n"); // quebre linha
            i = 0;
        }
        else{
            printf(" ");
        }
    }
}
