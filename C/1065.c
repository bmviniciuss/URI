#include <stdio.h>

int main(){
    int nums[5] = {0,0,0,0,0};
    int pares = 0, i = 0;

    scanf("%d %d %d %d %d", &nums[0],&nums[1],&nums[2],&nums[3],&nums[4]);

    for(i = 0; i <= 4; i++){
        if(nums[i]%2 == 0){
            pares += 1;
        }
    }

    printf("%d valores pares\n", pares);
    return 0;
}
