#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c, AB, ABC;

    scanf("%d%d%d", &a, &b, &c);

    AB = ((a+b+abs(a-b))/2);
    ABC = ((AB+c+abs(AB-c))/2);

    printf("%d eh o maior\n", ABC);
    return 0;
}
