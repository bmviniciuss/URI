#include <stdio.h>

int main(){
    double nums[6] = {0,0,0,0,0,0}, media, total = 0;
    int posi = 0, i = 0;

    scanf("%lf %lf %lf %lf %lf %lf", &nums[0],&nums[1],&nums[2],&nums[3],&nums[4],&nums[5]);

    for(i = 0; i <= 5; i++){
        if(nums[i] > 0){
            posi += 1;
            total += nums[i];
        }
    }

    media = (float)total / posi;

    printf("%d valores positivos\n", posi);
    printf("%.1lf\n", media);


    return 0;
}
