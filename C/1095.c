#include <stdio.h>

int main(){
    int j;
    double i;

    for(j = 60; j >= 0; j-=5){
        i = (3.0/5)*((185.0/3)-j);
        printf("I=%.0lf J=%d\n", i, j);
    }

    return 0;
}
