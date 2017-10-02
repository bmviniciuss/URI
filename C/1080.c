#include <stdio.h>

int main(){
    int index = 1, num, i= 0, temp = 0;

    for(i=1; i<=100; i++){
        scanf("%d", &num);
        if(num > temp){
            temp = num;
            index = i;
        }
    }
    printf("%d\n", temp);
    printf("%d\n", index);

    return 0;
}
