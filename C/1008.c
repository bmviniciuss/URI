#include <stdio.h>

int main(){
    int id, horasTrabalhadas;
    double porHora, salario;

    scanf("%d%d%lf", &id, &horasTrabalhadas, &porHora);

    salario = porHora * horasTrabalhadas;

    printf("NUMBER = %d\n", id);
    printf("SALARY = U$ %.2lf\n", salario);
    return 0;
}
