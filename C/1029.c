//1029 - Fibonacci, Quantas Chamadas?
#include <stdio.h>
#include <stdlib.h>

int cont = 0;
int fib(int n);

int main(){
	int n, casos;

	scanf("%d", &casos);

	while(casos--){
		cont = 0;
		scanf("%d", &n);
		printf("fib(%d) = %d calls = %d\n", n, (cont - 1), fib(n));
	}

	return 0;
}

int fib(int n){
	cont++;
	if(n == 0 || n == 1){
		return n;
	}
	else{
		return (fib(n - 1) + fib(n - 2));
	}

}
