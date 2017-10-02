//1985 - MacPRONALTS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int casos, cod, qnt;
    double unt, total = 0;

    scanf("%d", &casos);

    while(casos--){
        scanf("%d %d", &cod, &qnt);
        switch (cod) {
            case 1001:
                unt = 1.5;
                total += qnt * unt;
                break;
            case 1002:
                unt = 2.5;
                total += qnt * unt;
                break;
            case 1003:
                unt = 3.5;
                total += qnt * unt;
                break;
            case 1004:
                unt = 4.5;
                total += qnt * unt;
                break;
            case 1005:
                unt = 5.5;
                total += qnt * unt;
                break;
        }
    }
    printf("%.2lf\n", total);


    return 0;
}
