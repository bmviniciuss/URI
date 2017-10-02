#include <stdio.h>

int main(){
    int dia1, hora1, min1, seg1;
    int dia2, hora2, min2, seg2;
    int diaTotal, horaTotal, minTotal, segTotal;
    int segDia1, segDia2;
    char lixo[4];

    scanf("%s %d", lixo, &dia1);
    scanf("%d : %d : %d", &hora1, &min1, &seg1);

    scanf("%s %d", lixo, &dia2);
    scanf("%d : %d : %d", &hora2, &min2, &seg2);

    //converter para menor unidade -> segundos
    segDia1 = seg1 + (min1 * 60) + (hora1 * 60 * 60) +(dia1 * 24 * 60 * 60);
    segDia2 = seg2 + (min2 * 60) + (hora2 * 60 * 60) +(dia2 * 24 * 60 * 60);
    //fim

    //tempo do evento
    segTotal = segDia2 - segDia1;

    diaTotal = segTotal / (24 * 60 * 60);
    segTotal %= (24 * 60 * 60);
    horaTotal = segTotal / (60 * 60);
    segTotal %= (60 * 60);
    minTotal = segTotal / 60;
    segTotal %= (60);

    printf("%d dia(s)\n", diaTotal);
    printf("%d hora(s)\n", horaTotal);
    printf("%d minuto(s)\n", minTotal);
    printf("%d segundo(s)\n", segTotal);


    return 0;
}
