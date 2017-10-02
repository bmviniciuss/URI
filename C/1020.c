#include <stdio.h>

int main(){
    int num, ano, mes, dia;

    scanf("%d",&num);

    ano = num/365;
    num -= ano*365;
    mes = num/30;
    num -= mes*30;
    dia = num;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
    return 0;
}
