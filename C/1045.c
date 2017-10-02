#include <stdio.h>

int main(){
    double original [ 3 ] = {0, 0, 0};
    double a = 0, b = 0, c = 0, temp = 0;
    int i = 0, j = 0;

    scanf("%lf %lf %lf", &original[0], &original[1], &original[2]);

    //ordena em decrescente
    for(j = 0; j<=2; j++){
        for(i=0; i<=1; i++){
            if(original[i] < original[i+1]){
                temp = original[i+1];
                original[i+1] = original[i];
                original[i] = temp;
            }
        }
    }

    a = original[0];
    b = original[1];
    c = original[2];

    if(a >= (b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if((a*a) == ((b*b)+(c*c))){
        printf("TRIANGULO RETANGULO\n");
    }
    else if(a * a > b * b + c * c){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(a * a < b * b + c * c){
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(a == b && b == c){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(a == b || b == c){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
