//1103 - Alarme Despertador
#include <stdio.h>

int main() {
    int h1 = 1 , m1 = 1, h2 = 1, m2 = 1, min1, min2, minTotal;

    while(1){
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if((h1 == 0 && m1 == 0) && (h2 == 0 && m2 == 0)){
            break;
        }
        else{
            min1 = (h1*60) + m1;
            min2 = (h2*60) + m2;
            minTotal = min2 - min1;
            //se minTotal < 0, começa e termina em dias diferentes
            if(minTotal < 0){
                minTotal += 1440; //portanto add 24 horas (em min);
            }
            printf("%d\n", minTotal);
        }
    }
    return 0;
}
