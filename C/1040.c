#include <stdio.h>

int main(){
    float n1, n2, n3, n4, media, exame = 0, mediaFinal, nE;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2 + 3 + 4 + 1));

    printf("Media: %.1f\n", media);

    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(media < 5.0){
        printf("Aluno reprovado.\n");
    }
    else if(media >= 5.0 && media <=6.9){
        printf("Aluno em exame.\n");

        scanf("%f", &nE);

        printf("Nota do exame: %.1f\n", nE);

        mediaFinal = ((nE + media)/2.0);

        if(mediaFinal >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else if(mediaFinal <= 4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", mediaFinal);
    }

    return 0;
}
