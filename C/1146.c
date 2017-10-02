//1146 - Sequências Crescentes
#include <stdio.h>

int main(){
    int max, i;

    do{
        scanf("%d", &max);
        for(i = 1; i <= max; i++){
            printf("%d", i);
            if(i == max){
                printf("\n");
                break;
            }
            else{
                printf(" ");
            }
        }
    }while(max != 0);

    return 0;
}
