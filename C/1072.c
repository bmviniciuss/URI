#include <stdio.h>

int main(){
    int casos = 0, dentro = 0, fora = 0, teste = 0;
    int i = 0;

    scanf("%d", &casos);

    for(i = 1; i <= casos; i++){
        scanf("%d", &teste);
        if(teste >= 10 && teste <=20){
            dentro += 1;
        }
        else{
            fora += 1;
        }
    }

    printf("%d in\n", dentro);
    printf("%d out\n", fora);
    return 0;
}
