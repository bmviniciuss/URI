// 1042 - PUM
#include <stdio.h>

int main(){
    int order [ 3 ] = {0, 0, 0};
    int original [ 3 ] = {0, 0, 0};
    int i, j, temp;

    scanf("%d %d %d", &order[0], &order[1], &order[2]);

    original[0] = order[0];
    original[1] = order[1];
    original[2] = order[2];

    for(j = 0; j<=2; j++){
        for(i=0; i<=1; i++){
            if(order[i] > order[i+1]){
                temp = order[i+1];
                order[i+1] = order[i];
                order[i] = temp;
            }
        }
    }

    for(j=0; j<=2; j++){
        printf("%d\n", order[j]);
    }
    printf("\n");
    for(j=0; j<=2; j++){
        printf("%d\n", original[j]);
    }
    return 0;
}
