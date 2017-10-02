#include <stdio.h>

int printReajuste(double novoSalario, double reajuste, int porcentagem){
    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", porcentagem);
    return 0;
}

int main(){
    double salario, reajuste, novoSalario;
    int porcentagem;

    scanf("%lf", &salario);

    if(salario >= 0.0 && salario <= 400.0){
        porcentagem = 15.0;
        novoSalario = salario + salario * (porcentagem/100.0);
        reajuste = novoSalario - salario;
        printReajuste(novoSalario, reajuste, porcentagem);
    }
    else if(salario >= 400.01 && salario <= 800.0){
        porcentagem = 12.0;
        novoSalario = salario + salario * (porcentagem/100.0);
        reajuste = novoSalario - salario;
        printReajuste(novoSalario, reajuste, porcentagem);
    }
    else if(salario >= 800.01 && salario <= 1200.0){
        porcentagem = 10.0;
        novoSalario = salario + salario * (porcentagem/100.0);
        reajuste = novoSalario - salario;
        printReajuste(novoSalario, reajuste, porcentagem);
    }
    else if(salario >= 1200.01 && salario <= 2000.0){
        porcentagem = 7.0;
        novoSalario = salario + salario * (porcentagem/100.0);
        reajuste = novoSalario - salario;
        printReajuste(novoSalario, reajuste, porcentagem);
    }
    else{
        porcentagem = 4.0;
        novoSalario = salario + salario * (porcentagem/100.0);
        reajuste = novoSalario - salario;
        printReajuste(novoSalario, reajuste, porcentagem);
    }

    return 0;
}
