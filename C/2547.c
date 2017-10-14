#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int pass, hMin, hMax, i, total = 0, h;

    while((scanf("%d", &pass)) != EOF){
        total = 0;
        scanf("%d %d", &hMin, &hMax);

        for(i = 0; i < pass; i++){
            scanf("%d", &h);

            if(h >= hMin && h <= hMax){
                total++;
            }
        }
        printf("%d\n", total);
    }

    return 0;
}
