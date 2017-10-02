#include <stdio.h>

int main(){
    int peca1Codigo, peca1Quantidade, peca2Codigo, peca2Quantidade;
    double peca1ValorUnitario, peca2ValorUnitario, valorTotal;

    scanf("%d%d%lf", &peca1Codigo, &peca1Quantidade, &peca1ValorUnitario);
    scanf("%d%d%lf", &peca2Codigo, &peca2Quantidade, &peca2ValorUnitario);

    valorTotal = (peca1Quantidade * peca1ValorUnitario)+(peca2Quantidade * peca2ValorUnitario);

    printf("VALOR A PAGAR: R$ %.2lf\n", valorTotal);
    return 0;
}
