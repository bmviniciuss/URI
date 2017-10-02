//1144 - Sequência Lógica
#include <stdio.h>
#include <math.h>

int main(){
    int n, i, a = 1, b = 1, c = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("%d %d %d\n", a, b, c);
        printf("%d %d %d\n", a, b+1, c+1);
        a++;
        b = pow(a, 2);
        c = pow(a, 3);

    }

    return 0;
}
