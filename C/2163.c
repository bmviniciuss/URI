//2163 - O Despertar da Força
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int nLin, nCol, lin, col, n7 = 8, n = 0, num;
	int x = 0,y = 0;

	scanf("%d %d", &nLin, &nCol);
	int space[nLin][nCol];

	//prenche matriz
	for(lin = 0; lin < nLin; lin++){
		for(col = 0; col < nCol; col++){
			scanf("%d", &space[lin][col]);
		}
	}
	//checa 42
	for(lin = 1; lin < nLin - 1; lin++){
		for(col = 1; col < nCol - 1; col++){
			n = 0;
			num = space[lin][col];
			if(num == 42){
				if(space[lin - 1][col - 1] == 7){
					n++;
				}
				if(space[lin + 1][col + 1] == 7){
					n++;
				}
				if(space[lin + 1][col] == 7){
					n++;
				}
				if(space[lin - 1][col] == 7){
					n++;
				}
				if(space[lin][col - 1] == 7){
					n++;
				}
				if(space[lin][col + 1] == 7){
					n++;
				}
				if(space[lin + 1][col - 1] == 7){
					n++;
				}
				if(space[lin - 1][col + 1] == 7){
					n++;
				}
			}
			if(n == n7){
				x = lin + 1;
				y = col + 1;
				break;
			}
		}
	}
	printf("%d %d\n", x, y);


    return 0;
}
