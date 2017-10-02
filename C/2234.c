//2234 - Cachorros-Quentes
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    double total;
    int n, h;

    scanf("%d %d", &n, &h);

    total = (double)n/h;
    printf("%.2lf\n", total);


    return 0;
}
