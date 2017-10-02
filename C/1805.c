//1805 - Soma Natural
#include <stdio.h>

int main(){
    long long int soma,min, max, i;

    scanf("%lld %lld", &min, &max);

    soma = ((min+max)*(max-min + 1)/2);

    printf("%lld\n", soma);
    return 0;
}
