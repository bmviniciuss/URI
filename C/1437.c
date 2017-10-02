// 1437 - Esquerda, Volver!

#include <stdio.h>
#include <stdlib.h>


int main(){
     int casos, local = 0;
     int i, j;
     char comando[1001];

     while(1){
         scanf("%d", &casos);
         if(casos == 0){
             break;
         }
         else{
             // cada comando
             scanf("%s", comando);
             local = 0;
             for(j = 0; j < casos; j++){
                 if(comando[j] == 'D'){
                     local += 1;
                     if(local == 4){
                         local = 0;
                     }

                 }
                 else if(comando[j] == 'E'){
                     local -= 1;
                     if(local == -4){
                         local = 0;
                     }
                 }
             }
             // fim comandos
             if(local == 0){
                 printf("N\n");
             }
             else if(local == 1 || local == -3){
                 printf("L\n");
             }
             else if(local == 2 || local == -2){
                 printf("S\n");
             }
             else if(local == 3 || local == -1){
                 printf("O\n");
             }
        }
     }

    return 0;
}
