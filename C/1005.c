#include <stdio.h>

int main()
{
    double a,b, media;

    scanf("%lf%lf", &a, &b);

    media = ((a*3.5)+(b*7.5)) / (3.5+7.5);

    printf("MEDIA = %.5lf\n", media);
    return 0;
}
