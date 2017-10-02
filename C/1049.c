#include <stdio.h>
#include <string.h>

int main(){
    char nome1[20], nome2[20], nome3[20];

    scanf("%[^\n]%*c %[^\n]%*c %[^\n]%*c", nome1, nome2, nome3);

    //vertebrado
    if(strcmp(nome1, "vertebrado") == 0){
        if(strcmp(nome2, "ave") == 0){
            if(strcmp(nome3, "carnivoro") == 0){
                printf("aguia\n");
            }
            else if(strcmp(nome3, "onivoro") == 0){
                printf("pomba\n");
            }
        }
        else if(strcmp(nome2, "mamifero") == 0){
            if(strcmp(nome3, "onivoro") == 0){
                printf("homem\n");
            }
            else if(strcmp(nome3, "herbivoro") == 0){
                printf("vaca\n");
            }
        }
    }
    //invertebrado
    else if(strcmp(nome1, "invertebrado") == 0){
        if(strcmp(nome2, "inseto") == 0){
            if(strcmp(nome3, "hematofago") == 0){
                printf("pulga\n");
            }
            else if(strcmp(nome3, "herbivoro") == 0){
                printf("lagarta\n");
            }
        }
        else if(strcmp(nome2, "anelideo") == 0){
            if(strcmp(nome3, "hematofago") == 0){
                printf("sanguessuga\n");
            }
            else if(strcmp(nome3, "onivoro") == 0){
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
