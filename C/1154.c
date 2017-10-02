//1154 - Idades
#include <stdio.h>

int main(){
    int n = 0;
    double idade = 0, soma = 0, media = 0;

    while(1){
        scanf("%lf", &idade);
        if(idade < 0){
            break;
        }
        else{
            soma += idade;
            n++;
        }
    }

    media = (double)soma / n;

    printf("%.2lf\n", media);

    return 0;
}
