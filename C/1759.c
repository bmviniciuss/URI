//1759 - Ho Ho Ho
#include <stdio.h>

int main(){
    int n, i, cont = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        cont++;
        if(cont == n)
            printf("Ho!\n");
        else
            printf("Ho ");

    }

    return 0;
}
