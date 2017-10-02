#include <stdio.h>

int main(){
    int num, hora, minuto, segundo;

    scanf("%d",&num);
    hora = num/3600;
    num -= (hora * 3600);
    minuto = num/60;
    num -= (minuto*60);
    segundo = num;

    printf("%d:%d:%d\n", hora, minuto, segundo);
    return 0;
}
