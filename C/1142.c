//1142 - PUM
#include <stdio.h>

int main(){
    int n, i;
    int c1 = 1;
    int c2 = 2;
    int c3 = 3;

    scanf("%d", &n);

    printf("%d %d %d PUM\n", c1, c2, c3);
    for(i = 1; i<n; i++){
        c1 += 4;
        c2 += 4;
        c3 += 4;
        printf("%d %d %d PUM\n", c1, c2, c3);
    }

    return 0;
}
