#ifndef INCLUDED_QSORT
#define INCLUDED_QSORT

typedef int (* pfunc)(int, int);

void QSort(int[],int,pfunc);
void swap(int*,int*);

#endif