//1178 - Preenchimento de Vetor III
#include <stdio.h>

int main(){
    double vetor[100] = {0}, num;
    int i;

    scanf("%lf", &num);

    vetor[0] = num;
    //N[i] = Y
    for(i = 0; i < 100; i++){
        if(i > 0){
            vetor[i] = vetor[(i-1)]/2;
            printf("N[%d] = %.4lf\n", i, vetor[i]);
        }
        else{
            printf("N[%d] = %.4lf\n", i, vetor[i]);
        }
    }

    return 0;
}
