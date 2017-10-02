#include <stdio.h>

int main(){
    int casos, x, y, i;

    scanf("%d", &casos);

    for(i = 1; i <= casos; i++){
        scanf("%d %d", &x, &y);
        if(y == 0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1f\n", (float)x/y);
        }

    }

    return 0;
}
