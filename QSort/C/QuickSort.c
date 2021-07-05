#include "QuickSort.h"

void QSort_(int ar[], int left, int right, pfunc Comp) {
	int i, j, pivot;
	i = left;
	j = right;
	pivot = ar[left];
	while (1) {
		while (Comp(ar[i], pivot))
			i++;
		while (Comp(pivot, ar[j]))
			j--;
		if (i >= j)
			break;
		swap(&ar[i], &ar[j]);
		i++;
		j--;
	}
	if (left < i-1)
		QSort_(ar, left, i-1,Comp);
	if (j+1 < right)
		QSort_(ar, j+1, right,Comp);
}

void swap(int *x, int *y) {
	int tmp;
	tmp = *x;
	*x =*y;
	*y = tmp;
}

void QSort(int ar[],int n, pfunc Comp) {
	QSort_(ar, 0, n-1,Comp);
}
