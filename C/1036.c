#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, r1, r2, del;

    scanf("%lf%lf%lf", &a, &b, &c);

    del = (b*b)-(4*a*c);

    if(a != 0 && del >= 0){
        r1=(-b + sqrt(del))/(2.0*a);
        r2=(-b - sqrt(del))/(2.0*a);

        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
    else{
        printf("Impossivel calcular\n");
    }
    return 0;
}
