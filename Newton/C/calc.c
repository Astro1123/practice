#include "calc.h"

double fd(double x,double h,pfunc f) {
	return (f(x+h/2)-f(x-h/2))/h;
}

double Newton(double x,double h,pfunc f) {
	return x - f(x) / fd(x,h,f);
}