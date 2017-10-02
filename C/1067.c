//1067 - Números Ímpares
#include <stdio.h>

int main(){
    int max, i = 1;

    scanf("%d", &max);

    for(i = 1; i <= max; i++){
        if(i%2 != 0){
            printf("%d\n", i);
        }
    }

    return 0;
}
