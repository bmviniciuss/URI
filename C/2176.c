//2176 - Paridade
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n1 = 0, n0 = 0, i, len;
    char bits[105];

    scanf("%s", bits);

    for(i = 0; i < strlen(bits); i++){
        if(bits[i] == '0'){
            n0++;
        }
        else if(bits[i] == '1'){
            n1++;
        }
        printf("%c", bits[i]);
    }
    if(n1 % 2 == 0){
        printf("%c\n", '0');
    }
    else{
        printf("%c\n", '1');
    }

}
