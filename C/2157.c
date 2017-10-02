//2157 - Sequência Espelho
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int casos;
    int i, inicio, fim, total, j, len, k;
    char nums[15000],cLoop[1005], num;

    scanf("%d\n", &casos);

    while(casos--){
        scanf("%d %d", &inicio, &fim);

        j = 0;
        for(i = inicio; i <= fim; i++){
            sprintf(cLoop, "%d", i);
            len = strlen(cLoop);
            // printf("NUM: %s - Len: %d\n", cLoop, len);
            if(len == 1){
                nums[j] = cLoop[0];
                j++;
            }
            else if(len > 1){
                for(k = 0; k < strlen(cLoop); k++){
                    // printf("%c\n", cLoop[k]);
                    nums[j] = cLoop[k];
                    j++;
                }

            }
            // printf("%d\n", i);
        }
        nums[j] = '\0';

        //print orginal order
        for(i = 0; i < strlen(nums); i++){
            printf("%c", nums[i]);
        }
        //print reverse order
        for(i = ((int)strlen(nums) - 1); i >= 0; i--){
            printf("%c", nums[i]);
        }
        printf("\n");
    }


    return 0;
}
