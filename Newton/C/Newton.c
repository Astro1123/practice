#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calc.h"

double f(double x) {
	return x * x - 2;
}

int main(void) {
	int i,count;
	double x,h,eps;
	char str[100];
	
	printf("x = ");
	fgets(str,sizeof(str),stdin);
	x = atof(str);
	printf("eps = ");
	fgets(str,sizeof(str),stdin);
	eps = atof(str);
	if ( eps >= 1 || eps <= 0 ) eps = 0.0000000001;
	printf("h = ");
	fgets(str,sizeof(str),stdin);
	h = atof(str);
	if ( h > 1 || h <= 0) h = 0.00001;
	printf("count = ");
	fgets(str,sizeof(str),stdin);
	count = atoi(str);
	if (count <= 0) count = 1000;
	puts("");
	
	for (i=0; i<count; i++) {
		x = Newton(x,h,f);
		if (fabs(f(x)) < eps) break;
	}
	printf("x = %f\nf(x) = %f\n",x,f(x));
	puts("");
	
	return 0;
}