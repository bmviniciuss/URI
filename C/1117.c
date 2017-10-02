//1117 - Validação de Nota
#include <stdio.h>

double getNota(void){
    double nota;

    while(1){
        scanf("%lf", &nota);
        if(nota<0 || nota>10){
            printf("nota invalida\n");
            continue;
        }
        else{
            break;
        }
    }
    
    return nota;
}


int main(){
    int i;
    double nota1, nota2, media;

    nota1 = getNota();
    nota2 = getNota();
    media = (nota1 + nota2 )/ 2.0;

    printf("media = %.2lf\n", media);

    return 0;
}
