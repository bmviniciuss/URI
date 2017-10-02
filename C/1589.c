//1589 - Bob Conduite
#include <stdio.h>

int main(){
    int casos, i;
    int raio1, raio2, raioC;

    scanf("%d", &casos);

    for(i = 0; i < casos; i++){
        scanf("%d %d", &raio1, &raio2);

         raioC = raio1 + raio2;

         printf("%d\n", raioC);
    }

    return 0;
}
