#include <stdio.h>

int main(){
    int i, k;
    int j[3] = {7, 6, 5};

    for(i = 1; i <= 9; i+=2){
        for(k = 0; k <= 2; k++){
            printf("I=%d J=%d\n", i, j[k]);
        }
    }
    return 0;
}
