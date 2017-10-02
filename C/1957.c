//1957 - Converter para Hexadecimal
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    long long int num, resto;
    int i, len, j;
    char hexa[1005];

    scanf("%lld", &num);
    i = 0;
    while(num > 0){
        resto = num%16;
        num /= 16;

        if(resto <= 9){
            hexa[i] = resto + 48;
        }
        else if(resto == 10){
            hexa[i] = 'A';
        }
        else if(resto == 11){
            hexa[i] = 'B';
        }
        else if(resto == 12){
            hexa[i] = 'C';
        }
        else if(resto == 13){
            hexa[i] = 'D';
        }
        else if(resto == 14){
            hexa[i] = 'E';
        }
        else if(resto == 15){
            hexa[i] = 'F';
        }
        i++;
    }
    hexa[i] = '\0'; //fim de linha
    len = strlen(hexa);
    
    //prita reversed
    for(j = len-1; j >= 0; j--){
        printf("%c", hexa[j]);
    }
    printf("\n");

    return 0;
}
