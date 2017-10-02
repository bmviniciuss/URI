//1249 - Rot13
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char c;

    //olhar simetria do alfabeto
    while(scanf("%c", &c) != EOF){
        if(c >= 'a' && c <= 'z'){
            if(c + 13 > 'z'){
                printf("%c", c-13);
            }
            else{
                printf("%c", c+13);
            }
        }
        else if(c >= 'A' && c <= 'Z'){
            if(c + 13 > 'Z'){
                printf("%c", c-13);
            }
            else{
                printf("%c", c+13);
            }
        }
        else{
            printf("%c", c);
        }
    }

    return 0;
}
