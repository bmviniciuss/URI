//1958 - Notação Científica
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    long double num;
    char cNum[150];
    int i;

    scanf("%LE", &num);
    sprintf(cNum, "%LE", num);

    if(cNum[0] != '-'){
        printf("+");
    }
    printf("%.4LE\n", num);


    return 0;
}
