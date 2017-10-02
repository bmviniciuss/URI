//2581 - I am Toorg!
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int casos;
    char pergunta[500];

    scanf("%d", &casos);
    getchar();

    while (casos--) {
        scanf("%[^\n]s", pergunta);
        printf("I am Toorg!\n");
        getchar();
    }


    return 0;
}
