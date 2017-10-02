//1151 - Fibonacci Fácil
#include <stdio.h>

int main(){
    int fib[46] = {0, 1}, n, i, c = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        if(i > 1){
            fib[i] = fib[(i-1)] + fib[(i-2)];
        }
    }

    for(i = 0; i < n; i++){
        printf("%d",fib[i]);
        c++;
        if(c == n){
            printf("\n");
        }
        else{
            printf(" ");
        }
    }
    
    return 0;
}
