#ifndef INCLUDED_NEWTON
#define INCLUDED_NEWTON
typedef double(* pfunc)(double);

double fd(double,double,pfunc);
double Newton(double,double,pfunc);
#endif