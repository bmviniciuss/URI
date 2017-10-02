#include <stdio.h>

int main(){
    int casos, i, teste;

    scanf("%d", &casos);

    for(i = 1; i<=casos; i++){
        scanf("%d", &teste);
        if(teste == 0){
            printf("NULL\n");
        }
        else{
            if(teste % 2 == 0){
                //par
                if(teste > 0){
                    //positive
                    printf("EVEN POSITIVE\n");
                }
                else{
                    //negative
                    printf("EVEN NEGATIVE\n");
                }
            }
            else{
                //impar
                if(teste > 0){
                    //positive
                    printf("ODD POSITIVE\n");
                }
                else{
                    //negative
                    printf("ODD NEGATIVE\n");
                }
            }
        }
    }
    return 0;
}
