//1864 - Nossos Dias Nunca Voltarão
#include <stdio.h>


int main(){
    char texto[34] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int i, max;

    scanf("%d", &max);

    for(i = 0; i < max; i++){
        printf("%c", texto[i]);
    }
    printf("\n");
    return 0;
}
