// 1118 - Várias Notas Com Validação
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

int getControle(void){
    int controle;

    while(1){
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &controle);
        if(controle != 1 && controle != 2){
            continue;
        }
        else{
            break;
        }
    }

    return controle;
}


int main(){
    int i, c;
    double nota1, nota2, media;

    while(1){
        nota1 = getNota();
        nota2 = getNota();
        media = (nota1 + nota2 )/ 2.0;
        printf("media = %.2lf\n", media);

        c = getControle();

        if(c == 1){
            continue;
        }
        else{
            break;
        }
    }
    return 0;
}
