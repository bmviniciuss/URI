// 2483 - Feliz Nataaal!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, i;

    scanf("%d", &n);
    //Feliz nat|aaaaa|l!
    printf("%s", "Feliz nat");
    for(i = 0; i < n; i++){
        printf("%c", 'a');
    }
    printf("%s\n", "l!");


    return 0;
}
