//1983 - O Escolhido
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MEDIA 8

struct Aluno{
    int matricula;
    double nota;

};

int main(){
    int nAlunos, i, index = 0;
    double anterior;

    scanf("%d", &nAlunos);

    struct Aluno alunos[nAlunos];

    anterior = 0;

    for(i = 0; i < nAlunos; i++){
        scanf("%d", &alunos[i].matricula);
        scanf("%lf", &alunos[i].nota);

        if(alunos[i].nota > anterior && alunos[i].nota >= MEDIA){
            index = i;
            anterior = alunos[i].nota;
        }
    }


    if(anterior == 0){
        printf("Minimum note not reached\n");
    }
    else printf("%d\n", alunos[index].matricula);

    return 0;
}
