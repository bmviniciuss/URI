//1914 - De Quem é a Vez?
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char p1Name[1005], p1Type[10],p2Name[1005], p2Type[10];
    int casos, p1, p2, total;

    scanf("%d", &casos);
    getchar(); //limpa \n

    while(casos--){
        scanf("%s %s %s %s", p1Name, p1Type, p2Name, p2Type);
        scanf("%d %d", &p1, &p2);

        total = p1 + p2;

        if(!(strcmp(p1Type, "PAR"))){ // p1 PAR
            if(total % 2 == 0){
                printf("%s\n", p1Name);
            }
            else{
                printf("%s\n", p2Name);
            }
        }
        else{ // p2 PAR
            if(total % 2 == 0){
                printf("%s\n", p2Name);
            }
            else{
                printf("%s\n", p1Name);
            }

        }
        // printf("%s %s - %d\n", p1Name, p1Type, p1);
        // printf("%s %s - %d\n", p2Name, p2Type, p2);

    }


    return 0;
}
