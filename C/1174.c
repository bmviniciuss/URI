//1174 - Seleçao em Vetor I
#include <stdio.h>

int main(){
    int i = 0;
    double vetor[100], num;

    for(i = 0; i < 100; i++){
        scanf("%lf", &num);
        vetor[i] = num;
    }

    for(i = 0; i < 100; i++){
        if(vetor[i] <= 10){
            printf("A[%d] = %.1lf\n", i, vetor[i]);
        }
    }

    return 0;
}

//A[i] = x
