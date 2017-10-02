//1984 - O Enigma do Pronalândia
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    unsigned long long int num;
    char cNum[15];
    int len, i;

    scanf("%llu", &num);

    sprintf(cNum, "%llu", num);
    len = strlen(cNum);

    for(i = len -1; i >= 0; i--){
        printf("%c", cNum[i]);
    }
    printf("\n");


    return 0;
}
