//2060 - Desafio de Bino
#include <stdio.h>
#include <stdlib.h>

int main(){
    int casos, n2 = 0,n3 = 0,n4 = 0,n5 = 0, num;

    scanf("%d", &casos);

    while(casos--){
        scanf("%d", &num);
        if(!(num % 2)){
            n2++;
        }
        if(!(num % 3)){
            n3++;
        }
        if(!(num % 4)){
            n4++;
        }
        if(!(num % 5)){
            n5++;
        }
    }
    /*
    4 Multiplo(s) de 2
    0 Multiplo(s) de 3
    2 Multiplo(s) de 4
    3 Multiplo(s) de 5
    */
    printf("%d Multiplo(s) de 2\n", n2);
    printf("%d Multiplo(s) de 3\n", n3);
    printf("%d Multiplo(s) de 4\n", n4);
    printf("%d Multiplo(s) de 5\n", n5);


    return 0;
}
