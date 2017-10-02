//1564 - Vai Ter Copa?
#include <stdio.h>

int main(){
    int num;

    while((scanf("%d", &num)) != EOF){
        if(num == 0){
            printf("vai ter copa!\n");
        }
        else if(num > 0){
            printf("vai ter duas!\n");
        }
    }

    return 0;
}
