// 1930 - Tomadas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int t1, t2, t3, t4, total = 0;

    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
    total = (t1+t2+t3+t4) - 3;
    printf("%d\n", total);


    return 0;
}
