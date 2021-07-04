#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int x) {
	int i;
	if (x<2) return -1;
	if (x==2) return 1;
	if (x%2==0) return 0;
	for (i=3; i<=sqrt(x); i+=2) {
		if(x%i==0) return 0;
	}
	return 1;
}

int main(void) {
	int n,i;
	char str[100], ans[3][20]={"Error","Composite number","Prime number"};
	
	do {
		printf("number : ");
		fgets(str,sizeof(str),stdin);
		n = atoi(str);
		if (n < 0) n = 0;
		printf("%s\n",ans[isPrime(n)+1]);
		puts("");
		printf("Continue? (Yes : 1 / No : 0) : ");
		fgets(str,sizeof(str),stdin);
		i = atoi(str);
		puts("");
	} while(i != 0);
	
	return 0;
}