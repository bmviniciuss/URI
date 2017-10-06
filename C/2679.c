//2679 - Sucessor Par
#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int num, suc;

    scanf("%lld", &num);

    if(num % 2 == 0){
        suc = num + 2;
    }
    else{
        suc = num + 1;
    }
    printf("%lld\n", suc);

    return 0;
}
