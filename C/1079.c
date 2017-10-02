#include <stdio.h>

int main(){
    int casos = 0, i = 0;
    double n1, n2, n3, media = 0;

    scanf("%d", &casos);

    for(i = 1; i <= casos; i++){
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        media = ((n1 * 2.0)+(n2 * 3.0)+(n3 * 5.0))/(2.0 + 3.0 + 5.0);
        printf("%.1lf\n", media);
    }

    return 0;
}
