//1176 - Fibonacci em Vetor
#include <stdio.h>

int main(){
    unsigned long long int fib[61] = {0};
    int n = 0, i = 0,casos = 0;

    fib[0] = 0;
    fib[1] = 1;

    //gera Fibonacci ate 60;
    for(i = 0; i < 61; i++){
        if(i>1){
            fib[i] = fib[(i-1)] + fib[(i-2)];
        }
    }

    scanf("%d", &casos);

    for(i = 0; i < casos; i++){
        scanf("%d", &n);
        printf("Fib(%d) = %llu\n", n, fib[n]);
    }

    return 0;
}
