//1871 - Zero vale Zero
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int num1, num2, total;
    char cNum[20], i;

    while (1) {
        scanf("%d %d", &num1, &num2);

        if(num1 == 0 && num2 == 0) break;

        total = num1 + num2;
        sprintf(cNum, "%d", total);

        for(i = 0; i < strlen(cNum); i++){
            if(cNum[i] != '0'){
                printf("%c", cNum[i]);
            }
        }
        printf("\n");

    }


    return 0;
}
