//1091 - Divisão da Nlogônia
#include <stdio.h>

int main(){
    int casos, i;
    int divX, divY;
    int resX, resY;

    while(1){
        scanf("%d", &casos);
        if(casos == 0)
            break;
        else{
            scanf("%d %d", &divX, &divY);
            for(i = 0; i < casos; i++){
                scanf("%d %d", &resX, &resY);
                //comparação
                if(resX == divX){ //E
                    printf("divisa\n");
                }
                else if(resY == divY){
                    printf("divisa\n");
                }
                else{
                    if(resX > divX){ // E
                        if(resY > divY){ // NE
                            printf("NE\n");
                        }
                        else{
                            printf("SE\n");
                        }
                    }
                    else{
                        if(resY > divY){ // NE
                            printf("NO\n");
                        }
                        else{
                            printf("SO\n");
                        }
                    }
                }
            }
        }
    }


    return 0;
}
