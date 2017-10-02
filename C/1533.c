//1533 - Detetive Watson
#include <stdio.h>

int main(){
    int n, i, j, num, temp;

    while(1){
        scanf("%d", &n);
        int nums[n];
        int nums_copy[n];

        if(n == 0) break;
        else{

            //prenche vetor
            for(i = 0; i < n; i++){
                scanf("%d", &num);
                nums[i] = num;
                nums_copy[i] = num;
            }

            // ordenação
            for(i = 0; i < n; i++){
                for(j = 0; j < n - 1; j++){
                    if(nums[j] < nums[j + 1]){
                        temp = nums[j];
                        nums[j] = nums[j + 1];
                        nums[j+1] = temp;
                    }
                }
            }

            //pega o index
            for(i = 0; i < n; i++){
                if(nums_copy[i] == nums[1]){
                    break;
                }
            }

            //printa resultado
            printf("%d\n", i + 1);
        }
    }

    return 0;
}
