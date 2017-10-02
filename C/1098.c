#include <stdio.h>

int main(){
    float i, j;
    int iInt,jInt;

    for(i = 0.0; i <2.001; i= i + .2){
        for(j = 1.0; j <= 3.0; j = j +1.0){
            if(i>0.0 && i<1.0 || i>1.0 && i<2.0){ // se os valores forem floats
                //usar float
                printf("I=%.1f J=%.1f\n", i, i+j);
            }
            else{ // se os valores forem .0
                //transformar em inteiro
                iInt = i;
                jInt = i+j;
                printf("I=%d J=%d\n", iInt, jInt);
            }

        }

    }

    return 0;
}
