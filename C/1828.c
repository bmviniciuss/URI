//1828 - Bazinga!
#include <stdio.h>
#include <string.h>

int main(){
    int casos, i;
    char sheldon[20], raj[20];

    scanf("%d", &casos);

    for(i = 1; i <= casos; i++){
        scanf("%s %s", sheldon, raj);
        if(!strcmp(sheldon, raj)){
            printf("Caso #%d: De novo!\n", i);
        }
        //1
        else if(!strcmp(sheldon, "tesoura") && !strcmp(raj, "papel")){
            printf("Caso #%d: Bazinga!\n", i);
        }
        //2
        else if(!strcmp(sheldon, "papel") && !strcmp(raj, "pedra")){
            printf("Caso #%d: Bazinga!\n", i);
        }
        //3
        else if(!strcmp(sheldon, "pedra") && !strcmp(raj, "lagarto")){
            printf("Caso #%d: Bazinga!\n", i);
        }
        //4
        else if(!strcmp(sheldon, "lagarto") && !strcmp(raj, "Spock")){
            printf("Caso #%d: Bazinga!\n", i);
        }
        //5
        else if(!strcmp(sheldon, "Spock") && !strcmp(raj, "tesoura")){
            printf("Caso #%d: Bazinga!\n", i);
        }
        //6
        else if(!strcmp(sheldon, "tesoura") && !strcmp(raj, "lagarto")){
            printf("Caso #%d: Bazinga!\n", i);
        }
        //7
        else if(!strcmp(sheldon, "lagarto") && !strcmp(raj, "papel")){
            printf("Caso #%d: Bazinga!\n", i);
        }
        //8
        else if(!strcmp(sheldon, "papel") && !strcmp(raj, "Spock")){
            printf("Caso #%d: Bazinga!\n", i);
        }
        //9
        else if(!strcmp(sheldon, "Spock") && !strcmp(raj, "pedra")){
            printf("Caso #%d: Bazinga!\n", i);
        }
        //10
        else if(!strcmp(sheldon, "pedra") && !strcmp(raj, "tesoura")){
            printf("Caso #%d: Bazinga!\n", i);
        }
        else{
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }

    return 0;
}
