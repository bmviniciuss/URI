#include <stdio.h>

int main(){
    double salario, total, imposto, diferenca;

    scanf("%lf", &salario);

    if(salario>4500){
        imposto = 1000*(8/100.0)+1500*(18/100.0);
        diferenca = salario - 4500;
        imposto += diferenca * (28/100.0);
        printf("R$ %.2lf\n", imposto);
    }
    else if(salario > 3000.00 && salario <= 4500){
        imposto = 1000*(8/100.0);
        diferenca = salario - 3000;
        imposto += diferenca * (18/100.0);
        printf("R$ %.2lf\n", imposto);
    }
    else if(salario > 2000.00 && salario <=3000.0){
        diferenca = salario - 2000.0;
        imposto = diferenca * (8/100.0);
        printf("R$ %.2lf\n", imposto);
    }
    else{
        printf("Isento\n");
    }
    return 0;
}

/*
2500
2000 Isento
500 x 8%

*/
