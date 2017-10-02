//1865 - Mjölnir
#include <stdio.h>
#include <string.h>

int main(){
    char nome[5];
    int casos, forca, i;

    scanf("%d", &casos);

    for(i = 0; i < casos; i++){
        scanf("%s %d", nome, &forca);
        if(strcmp(nome, "Thor")==0){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }

    return 0;
}
