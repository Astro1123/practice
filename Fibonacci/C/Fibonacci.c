#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int x) {
	return (x < 2 ? x : Fibonacci(x - 2) + Fibonacci(x - 1));
}

int main(void) {
	int i,n;
	char str[100];
	
	printf("n = ");
	fgets(str,sizeof(str),stdin);
	n = atoi(str);
	if (n < 0) n = 0;
	puts("");
	
	for (i=0; i<=n; i++)
		printf("%d : %d\n", i, Fibonacci(i));
	
	puts("");
	return 0;
}