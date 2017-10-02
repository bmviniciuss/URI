#include <stdio.h>

int main(){
    int cod, quant;
    double total;

    scanf("%d %d", &cod, &quant);

    switch (cod) {
        case 1: // cachorro quente - R$ 4.00
            total = quant * 4.00;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 2: // X-salada - R$ 4.50
            total = quant * 4.50;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 3: // X-Bacon - R$ 5.00
            total = quant * 5.00;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 4: // Torrada Simples - R$ 2.00
            total = quant * 2.00;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 5: // Refrigerante - R$ 1.50
            total = quant * 1.50;
            printf("Total: R$ %.2lf\n", total);
            break;
    }

    return 0;
}
