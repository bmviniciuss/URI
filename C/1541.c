//1541 - Construindo Casas
#include <stdio.h>
#include <math.h>

int main(){
    int ladoA, ladoB, porc, areaTotal;
    double lado;

    while(1){
        scanf("%d", &ladoA);

        if(ladoA == 0){
            break;
        }
        else{
            scanf("%d %d", &ladoB, &porc);

            areaTotal = (100* ladoA * ladoB)/porc;
            lado = sqrt(areaTotal);
            printf("%d\n", (int)lado);

        }
    }
    return 0;
}
