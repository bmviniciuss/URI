//1168 - LED
#include <stdio.h>
#include <string.h>

int main(){
    int casos, i, tLeds = 0, aux, j;
    char num[150];

    scanf("%d", &casos);

    for(i = 0; i < casos; i++){
        tLeds = 0;
        scanf("%s", num);

        for(j = 0; j < strlen(num); j++){
            aux = num[j];
            switch(aux){
                case '0':
                    tLeds += 6;
                    break;
                case '1':
                    tLeds += 2;
                    break;
                case '2':
                    tLeds += 5;
                    break;
                case '3':
                    tLeds += 5;
                    break;
                case '4':
                    tLeds += 4;
                    break;
                case '5':
                    tLeds += 5;
                    break;
                case '6':
                    tLeds += 6;
                    break;
                case '7':
                    tLeds += 3;
                    break;
                case '8':
                    tLeds += 7;
                    break;
                case '9':
                    tLeds += 6;
                    break;
            } //fim switch
        }//fim for interno
        printf("%d leds\n", tLeds);

    }

    return 0;
}
