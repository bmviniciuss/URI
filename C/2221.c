//2221 - Batalha de Pomekons
#include <stdio.h>
#include <stdlib.h>

double golpe(int ataque, int defesa, int level, int bonus);

int main(){
    int casos, bonus;

    scanf("%d", &casos);

    while(casos--){
        int p1A, p1D, p1L, p2A, p2D, p2L;
        double p1G, p2G;

        scanf("%d", &bonus);
        scanf("%d %d %d", &p1A, &p1D, &p1L);
        scanf("%d %d %d", &p2A, &p2D, &p2L);

        p1G = golpe(p1A, p1D, p1L, bonus);
        p2G = golpe(p2A, p2D, p2L, bonus);

        if(p1G == p2G){
            printf("Empate\n");
        }
        else if(p1G > p2G){
            printf("Dabriel\n");
        }
        else{
            printf("Guarte\n");
        }
    }

    return 0;
}

double golpe(int ataque, int defesa, int level, int bonus){
    double total;
    total = (ataque + defesa)/2.0;
    if(level % 2 == 0){
        total += bonus;
    }
    return total;
}
