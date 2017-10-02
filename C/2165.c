//2165 - Tuitando
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 140

int main(){
    char texto[505];
    int len;

    scanf("%[^\n]s", texto);
    len = strlen(texto);

    if(len > MAX){
        printf("MUTE\n");
    }
    else{
        printf("TWEET\n");
    }
    getchar();


    return 0;
}
