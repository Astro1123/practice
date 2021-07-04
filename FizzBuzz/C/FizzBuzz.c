#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int i,n;
	char str[100];
	printf("n = ");
	fgets(str,sizeof(str),stdin);
	n = atoi(str);
	n = (n<1 ? 100 : n);
	puts("");
	for(i=0;i<n;i++) {
		if ( (i+1) % 15 == 0) {
			printf("Fizz Buzz\n");
		} else if ( (i+1) % 5 == 0) {
			printf("Buzz\n");
		} else if ( (i+1) % 3 == 0) {
			printf("Fizz\n");
		} else {
			printf("%d\n",i+1);
		}
	}
	puts("");
	return 0;
}