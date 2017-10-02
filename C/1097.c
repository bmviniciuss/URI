#include <stdio.h>

int main(){
    int i, k;
    int j[3] = {7, 6, 5};
    int taxa;

    for(i = 1; i <= 9; i+=2){
        for(k = 0; k <= 2; k++){
            if(i == 1){
                taxa = 0;
            }
            if(i == 3){
                taxa = 2;
            }
            if(i == 5){
                taxa = 4;
            }
            if(i == 7){
                taxa = 6;
            }
            if(i == 9){
                taxa = 8;
            }
            printf("I=%d J=%d\n", i, j[k]+ taxa);
        }
    }
    return 0;
}
