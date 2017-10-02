#include <stdio.h>

int main(){
    int nums[5] = {0, 0, 0, 0, 0};
    int i, posi, neg, par, impar, num;
    i = posi = neg = par = impar = 0;

    scanf("%d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);

    for(i = 0; i <= 4; i++){
        num = nums[i];
        if(num > 0){
            posi += 1;
        }
        if(num < 0){
            neg +=1;
        }
        if(num%2 == 0){
            par +=1;
        }
        if(num%2 != 0){
            impar += 1;
        }
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", posi);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}
