#include <stdio.h>

int main(){
    int max, num ,i = 1, j = 0, total = 0;

    scanf("%d", &max);

    do{
        num = max + j;
        if(num % 2 != 0){
            printf("%d\n", num);
            total += 1;
        }
        j++;
    }while(total < 6);

    return 0;
}
