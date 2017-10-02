//1789 - A Corrida de Lesmas
#include <stdio.h>

int main(){
    int nLesmas, max, i, velo;

    while((scanf("%d", &nLesmas)) != EOF){
        //prenchimento do vetor
        max = 0;
        for(i = 0; i < nLesmas; i++){
            scanf("%d", &velo);
            if(velo > max){
                max = velo;
            }
        }

        //comparação
        if(max < 10){
            printf("1\n");
        }
        else if(max >= 10 && max < 20){
            printf("2\n");
        }
        else{
            printf("3\n");
        }

    }

    return 0;
}
