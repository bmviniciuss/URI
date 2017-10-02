#include <stdio.h>
#include <stdlib.h>

int main(){
    double a, b, c, perimetro, area;

    scanf("%lf %lf %lf", &a, &b, &c);

    //saber se é triangulo
    if(a > abs(b-c) && (b + c) > a){
        //triangulo
        perimetro = a + b + c;

        printf("Perimetro = %.1lf\n", perimetro);
    }
    else{
        //trapezio
        area = (((a+b)*c))/2.0;

        printf("Area = %.1lf\n", area);
    }

    return 0;
}
