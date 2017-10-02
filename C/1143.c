//1143 - Quadrado e ao Cubo
#include <stdio.h>
#include <math.h>

int main(){
    int a = 1,b = 1,c = 1, i = 0, n;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("%d %d %d\n", a, b, c);
        a++;
        b = pow(a, 2);
        c = pow(a, 3);
    }

    return 0;
}
