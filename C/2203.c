//2203 - Tempestade de Corvos
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define CAN 1.5

int main(){
    double xF, yF, xI, yI, v, rConju, rCorvo, dist, raio, xPart, yPart;

    while (scanf("%lf %lf %lf %lf %lf %lf %lf", &xF, &yF, &xI, &yI, &v, &rConju, &rCorvo)!= EOF){
        raio = rConju + rCorvo;
        xPart = (xI - xF) *(xI - xF);
        yPart = (yI - yF) *(yI - yF);
        dist = sqrt(xPart + yPart);
        dist += (v * CAN); // + deltaS = v * tempo de canalização

        if(dist > raio){
            printf("N\n");
        }
        else{
            printf("Y\n");
        }
    }


    return 0;
}
