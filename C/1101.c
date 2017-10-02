#include <stdio.h>

int main(){
    int a, b, i, soma= 0;

    while(1){

        scanf("%d %d", &a, &b);

        soma = 0;

        if(a <= 0 || b <=0){
            break;
        }
        else{
            if(a>b){
                for(i=b; i <= a; i++){
                    printf("%d ", i);
                    soma += i;
                }
                printf("Sum=%d\n", soma);
            }
            else{
                for(i=a; i <= b; i++){
                    printf("%d ", i);
                    soma += i;
                }
                printf("Sum=%d\n", soma);
            }
        }
    }
    return 0;
}
