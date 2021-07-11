#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "QuickSort.h"

void PrintAr(int[],int);
void shuffle(int[],int);
int QSortComp(int, int);
double GetRand();

int main(void) {
	int n, *ar, i;
	char str[100];
	
	srand((unsigned int)time(NULL));
	
	printf("n = ");
	fgets(str,sizeof(str),stdin);
	n = atoi(str);
	if (n < 10) {
		n = 10;
	}
	puts("");
	
	ar = (int *)malloc(sizeof(int)*n);
	for(i=0; i<n; i++) {
		ar[i]=i+1;
	}
	
	shuffle(ar,n);
	PrintAr(ar,n);
	QSort(ar,n,QSortComp);
	PrintAr(ar,n);
	
	puts("");
	
	free(ar);
	return 0;
}

int QSortComp(int a, int b) {
	return a < b;
}

void PrintAr(int ar[],int n) {
	int i;
	printf("[ ");
	for (i=0;i<n;i++) {
		printf("%d",ar[i]);
		if (i != n-1)
			printf(", ");
	}
	puts(" ]");
}

double GetRand() {
	return (double)rand() / ((double)RAND_MAX + 1);
}

void shuffle(int ar[], int n) {
	int i;
	for (i=n; i>1; i--) {
		swap(&ar[i-1], &ar[(int)(GetRand()*n)%i]);
	}
}